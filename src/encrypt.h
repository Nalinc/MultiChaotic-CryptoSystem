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
   char patha[40],pathb[40];
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
	void Encode(FILE*);
	int LineCount();
	int pass;
	unsigned long  p;
	Encrypt()
	{
		//do nothing
	}
	
	Encrypt(const char *type, const char *filename)
	{
		this->t=type;
		this->f=filename;
		
		strcpy(patha,"../orig/bin/");
		strcpy(pathb,"../encrypted/");
		//patha="../orig/bin/"
		//patha="../encrypted"
		
		strcat(patha,f);
		strcat(pathb,f);

		p=433494437*2971215073; //10th & 11th Fibonacci Primes 
		m=0;
		
		
		if(strcmp(this->t,"image")==0)
		{
			status=this->encodeImage();
			if(status==1)
			{
				cout<<"\t\timage encoded in"<<f<<endl;
			}
		}

		else if(strcmp(this->t,"text")==0)
		{
			status=this->encodeText();			
			if(status==1)
			{
				cout<<"\t\tText encoded in"<<f<<endl;
			}
		}
		
		else if(strcmp(this->t,"av")==0)
		{
			status=this->encodeAV();			
			if(status==1)
			{
				cout<<"\t\tAV encoded in"<<f<<endl;
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
