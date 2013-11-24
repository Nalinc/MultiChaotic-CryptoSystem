#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <bitset>
#include <iostream>

using namespace std;

class RT
{

public:
const char *filename;
char path[40];
void wrap();	

RT()
{
	//Do nothing
}

RT(const char *f)
{
	this->filename=f;
	strcpy(path,"./orig/bin/");
	strcat(path,filename);
	cout<<"\n\n\t"<<path<<endl;
	wrap();
}
}; 
