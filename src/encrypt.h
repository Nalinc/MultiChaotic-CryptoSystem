#ifndef ENCRYPT_H
#define ENCRYPT_H

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Encrypt
{
	public:
	const char *t;
	const char *f;
	int status;
	FILE *fpw,*fpr,*rdfile;
   // double t, i, j, x[N], y[N], xnew[N], xf[N];
    int k, m, linecount,lc;
   // static int pass;
   char *check;
   char patha[40],pathb[40],pathc[40],r;
    unsigned char *ptx, *key;
    int offset;
    long long nn;
   // char *ptx;

	int encodeImage();
	int encodeText();
	int encodeAV();
	void func();
	unsigned char* decimal_to_binary(long long);
    int calcOff();
    long long concat(long long ,long long );
	long long BlumBlumShub(long long);     //PRNG
	void Encode();
	int LineCount();
	int pass;
    FILE *file1,*file2;

	unsigned long  p;

	Encrypt()
	{
		//do nothing
	}
	
	Encrypt(const char *type, const char *filename)
	{
		this->t=type;
		this->f=filename;
		
		strcpy(patha,"./orig/bin/");
		strcpy(pathb,"./encrypted/bin/");
		strcpy(pathc,"./encrypted/");
		//patha="/orig/bin/"
		//patha="/encrypted"
		
		
		strcat(patha,f);
		strcat(pathb,f);
		strcat(pathc,f);

		p=433494437U*2971215073U; //10th & 11th Fibonacci Primes 
		m=0;
		
		
		if(strcmp(this->t,"image")==0)
		{
			status=this->encodeImage();
			if(status==1)
			{
				cout<<"\t\timage encoded at "<<pathb<<endl<<endl;
			}
		}

		else if(strcmp(this->t,"text")==0)
		{
			status=this->encodeText();			
			if(status==1)
			{
				cout<<"\t\tText encoded at "<<pathb<<endl<<endl;
			}
		}
		
		else if(strcmp(this->t,"av")==0)
		{

 		  	  string spath="./orig/bin";
			  string dpath="./encrypted";

			  printf("\n%s\n",patha);	
		      file1=fopen((char*)patha,"rb");
		      file2=fopen((char*)pathc,"wb");

			  if(file2 == NULL || file1 == NULL ) 
			  {
				 printf("\n\n 1 could not be opened for reading. \n\n ");
				 exit(0);
			  }

			  status=this->encodeAV();			
              fclose(file1);
			  fclose(file2);

			if(status==1)
			{
				cout<<"\t\tFile encoded at "<<pathc<<endl<<endl;
				exit(0);
			}
		}
	}
	
	~Encrypt()
	{
		t=NULL;
		f=NULL;
	}

	
};

#endif
