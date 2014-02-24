#include "decrypt.h"
#include <math.h>

//<EncodeText>
int Decrypt::decodeText()
{

lc=LineCount();
offset=calcOff()+3;
func();
Decode();

cout<<"\n\t\t\tTask Completed..";
return 1;
}
//</EncodeText>

//<EncodeImage>
int Decrypt::decodeImage()
{
cout<<"\n\t\t\tTask Completed..";
return 1;
}
//</EncodeImage>

//<EncodeAV>
int Decrypt::decodeAV()
{
    int byt;
    while((byt=fgetc(file1)) != EOF)
    {
        byt = byt^10110;     //XORing with 10110
        fputc(byt,file2);  //write encrypted form to target file(2nd cmd line arg!)
    }

    fclose(file1);
    fclose(file2);

cout<<"\n\t\t\tTask Completed..";
return 1;
}
//</EncodeAV>

//<LineCount>
int Decrypt::LineCount()
{
  fpr = fopen(patha,"r");//"../orig/bin/txtbin.dat", "r");					       //open "txtbin.dat" for reading
  int LC = 0;
  check = (char*)malloc(32);

  if(check == NULL || fpr == NULL)
  {
     printf("\n\n encrypt.dat could not be opened for reading. \n\n ");
     exit(0);
  }

  else
  {
     while(!feof(fpr))
     {
        fscanf(fpr,"%s",check);
        if(check[0] != '\n')
        {
           LC++;							       //count the number of lines in txtbin.dat
        }
     }
  }
  free(check);
  fclose(fpr);								       //close "txtbin.dat"
return LC;
}
//</LineCount>




//<concat>
long long Decrypt::concat(long long a,long long b)
{
    long long times=1;
    while(times<=b)
    {
        times*=10;
    }

    return a*times+b;
}
//</concat>

//<calcoff>
int Decrypt::calcOff()
{
    char ptx[200],pty[200];
    int num;
    rdfile = fopen("./rossler_datum.dat", "r");
    if(rdfile == NULL)
    {  printf("\n\n rossler_datum.dat could not be opened for reading. \n\n ");
       exit(0);
     }
    fseek ( rdfile , -32 , SEEK_END );

    linecount=ftell(rdfile)-2;

    while(fscanf(rdfile, "%s%s%*c", ptx,pty) != EOF)
        num=abs(atof(pty)*1000);

    fclose(rdfile);
return num;
}
//</calcoff>

//<func>
void Decrypt::func()
{
  FILE *fpw;

  fpw = fopen(pathb,"w");//"../decrypted/decrypt.dat", "w");					       //create "encrypt.dat" for writing

  if(fpw == NULL)
  {
     printf("\n\n encrypt.dat could not be opened for writing. \n\n ");
     exit(0);
  }

  else
  {

    char pta[200],ptb[200],ptc[200],ptd[200],pte[200],ptf[200],ptg[200];

     rdfile = fopen("./rossler_datum.dat", "r");
      if(rdfile == NULL)
      {  printf("\n\n rossler_datum.dat could not be opened for reading. \n\n ");
        exit(0);
      }

     fseek ( rdfile , 86+offset , SEEK_SET );

      pass=0;
     while(fscanf(rdfile, "%s%s%s%s%s%s%s%*c", pta,ptb,ptc,ptd,pte,ptf,ptg) != EOF)
     {
       if( ftell(rdfile)>linecount-32)
              break;
       else if(strcmp(ptb,pte)!=0 || strcmp(ptc,ptf)!=0 || strcmp(ptd,ptg)!=0)
              continue;
       else
       {
         if(pass == lc-1)
               break;

     // if(pass==m-2)
       //    break;

//       printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\n", pta,ptb,ptc,ptd,pte,ptf,ptg);
       //remove(pta, pta + strlen(pta),'.');

        nn=concat(((fabs(atof(ptb))-abs(atoi(ptb)))*1000000),((fabs(atof(ptc))-abs(atoi(ptc)))*1000000));
        nn=concat(nn,((fabs(atof(ptd))-abs(atoi(ptd)))*1000000));
        nn=BlumBlumShub(nn); //PRNG
        key=decimal_to_binary(nn);

  //      Encode(fpw);

        fpr = fopen(patha,"rb");//"./encrypted/encrypt.dat", "rb");				       //open "txtbin.dat" for reading
        ptx = (char*)malloc(32);
        xorr = (char*)malloc(32);
        d=(char *) malloc(32);

        if(ptx == NULL ||  fpr == NULL)
        {
           printf("\n\n txtbin.dat could not be opened for reading. \n\n ");
           exit(0);
        }

        else
        {
           while(!feof(fpr))
           {

            if(m==pass+1)
                break;

            fseek(fpr, (pass*32) + pass, SEEK_SET);

            fscanf(fpr, "%s", ptx);

             for(k=0;k<32;k++)
              {
//                  printf("%d",(*(ptx+k)^*(key+k)));
                  fprintf(fpw,"%d",(*(ptx+k)^*(key+k)));
              }
              fprintf(fpw,"\n");

              //--

            m++;
           }

        }

        free(ptx);
        fclose(fpr);						               //close "txtbin.dat"
        free(xorr);
        pass++;

       }
     }//HERE HERE
 }

 free(key);
 fclose(fpw);
 fclose(rdfile);
}
//</func>
//--

//--

 char* Decrypt::decimal_to_binary(long long n)
{
   long long c, d, count;
   char *pointer;

   count = 0;
   pointer = (char*)malloc(32);

   if ( pointer == NULL )
      exit(EXIT_FAILURE);

   for ( c = 31 ; c >= 0 ; c-- )
   {
      d = n >> c;

      if ( d & 1 )
         *(pointer+count) = 1 + '0';
      else
         *(pointer+count) = 0 + '0';

      count++;
   }
   *(pointer+count) = '\0';

   return  pointer;
}

long long Decrypt::BlumBlumShub(long long num)  //PRNG
{
    return num*num%p;
}

void Decrypt::Decode()
{
    char *tmp;
    FILE *rdf,*wrf;
    tmp=(char*)malloc(32);

      rdf = fopen(pathb,"rb");//"../encrypted/bin/encrypt.dat", "rb");				       //open "txtbin.dat" for reading
      wrf = fopen(pathc,"w");//"../decrypted/decrypt.dat", "rb");				       //open "txtbin.dat" for reading

      if(rdf == NULL||tmp==NULL)
      {  printf("\n\n decrypt.dat could not be opened for reading. \n\n ");
        exit(0);
      }
      printf("\n\nDecoded Text: \n");

      while(fscanf(rdf,"%s",tmp)!=EOF)
      {
        r=strtol(tmp, (char **)NULL, 2);
        printf("%c",r);
        fprintf(wrf,"%c",r);
       }
        printf("\n");
        fprintf(wrf,"\n");

    fclose(rdf);
    fclose(wrf);
    free(tmp);

}

/*
int main()
{
    Decrypt obj1("text","txtbin.dat");
    Decrypt obj2("image","file2");
    Decrypt obj3("av","file3");

return 0;
}
*/

