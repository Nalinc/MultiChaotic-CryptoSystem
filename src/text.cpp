#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int countLines()
{ 
  FILE *fpr;
  fpr = fopen("../file.txt", "r");					       //open "txtbin.dat" for reading
  int linecount = 0;
  char *check = (char*)malloc(16);

  if(check == NULL || fpr == NULL) 
  {  printf("\n\n txtbin.dat could not be opened for reading. \n\n ");
     exit(0);
  }
  else
  {
     while(!feof(fpr))
     {  fscanf(fpr,"%s",check);
        if(check[0] != '\n')
        { linecount++;							       //count the number of lines in txtbin.dat
        }
     }
  }

  free(check);
  fclose(fpr);								       //close "txtbin.dat"

return linecount;
}


int main()
{

FILE *rdfile;
char ptx[200],pty[200],ptz[200],pta[200],ptb[200];

    rdfile = fopen("../rabinovich-fabrikant.dat", "r");
	  if(rdfile == NULL) 
	  {	 printf("\n\n rabinovich-fabrikant.dat could not be opened for reading. \n\n ");
		 exit(0);
	  }
     fseek ( rdfile , 30+72+73*53 , SEEK_CUR );
//double n;
//int num;

while(fscanf(rdfile, "%s%s%s%s%s%*c", ptx,pty,ptz,pta,ptb) != EOF)	
{
//	n=atof(pty);
//	num=floor(atof(pty)*1000);
	printf("\n%s\t%s\t%s\t%s\t%s",ptx,pty,ptz,pta,ptb);
}   



}
