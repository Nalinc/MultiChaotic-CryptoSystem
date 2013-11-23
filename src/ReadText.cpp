#include <string.h>
#include <stdio.h>
#include <fstream>
#include <bitset>
#include <iostream>

using namespace std;

class ReadText
{

public:
const char *filename;
char path[40];
void wrap();	

ReadText ()
{
	//Do nothing
}

ReadText(const char *f)
{
	this->filename=f;
	strcpy(path,"../orig/bin/");
	strcat(path,filename);
	
	wrap();
}
}; 

void ReadText::wrap()
{
     
     char text[100000];
     fflush(stdin);
     std::string str;  

     //printf("\n\n Enter the text which you want to encrypt : ");
     fgets(text, sizeof(text), stdin);
		
	 fstream fout;
	 
	 fout.open(path,ios::out);	
  

     str = text;

     for (std::size_t i = 0; i < str.size(); i++)
     {
        cout << bitset<32>(str.c_str()[i]) << endl;
        fout << bitset<32>(str.c_str()[i]) << endl;
     }
     
	fout.close();
}

/*
int main()
{
ReadText a("txtbin.dat");	
}
*/
