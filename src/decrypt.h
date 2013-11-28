#ifndef DECRYPT_H
#define DECRYPT_H

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Decrypt
{
	public:
	const char *t,*f;
	FILE *fpw,*fpr,*rdfile;
    int k, m, linecount,lc, offset, status;
    char *check,*ptx, *key,*d;
    char patha[40],pathb[40],pathc[40];
    
    long long nn;
   // char *ptx;

	int decodeImage();
	int decodeText();
	int decodeAV();
	void func();
	char* decimal_to_binary(long long);
    int calcOff();
    long long concat(long long ,long long );
	long long BlumBlumShub(long long);     //PRNG
	void Decode();
	int LineCount();
	int pass;
	char *xorr;
	char r;
    FILE *file1,*file2;	
	unsigned long  p;
	Decrypt()
	{
		//do nothing
	}
	
	Decrypt(const char *type, const char *filename)
	{
		this->t=type;
		this->f=filename;
		
				
		strcpy(patha,"./encrypted/bin/");
		strcpy(pathb,"./decrypted/bin/");
		strcpy(pathc,"./decrypted/");
	//	strcpy(pathc,"./decrypted/");
		//patha="/encrypted/"
		//pathb="/decrypted/"
		
		strcat(patha,f);
		strcat(pathb,f);
		strcat(pathc,f);
		
		p=433494437U*2971215073U; //10th & 11th Fibonacci Primes 
		m=0;
		
		
		if(strcmp(this->t,"image")==0)
		{
			status=this->decodeImage();
			if(status==1)
			{
				cout<<"\t\timage decoded at "<<pathb<<endl<<endl;
			}
		}

		else if(strcmp(this->t,"text")==0)
		{
			status=this->decodeText();			
			if(status==1)
			{
				cout<<"\t\tText decoded at "<<pathb<<endl<<endl;
			}
		}
		
		else if(strcmp(this->t,"av")==0)
		{
	  	    string spath="./encrypted";
		    string dpath="./decrypted";
	        file1=fopen((spath + "/" + f).c_str(),"rb");
	        file2=fopen((dpath + "/" + f).c_str(),"wb");


			status=this->decodeAV();			
			if(status==1)
			{
				cout<<"\t\tFile decoded at "<<pathc<<endl<<endl;
			}
		}
	}
	
	~Decrypt()
	{
		t=NULL;
		f=NULL;
	}

	
};

#endif
