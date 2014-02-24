#include "ReadText.h"

void RT::wrap()
{
     
     char text[100000];
     fflush(stdin);
     std::string str;  
     
     //printf("\n\n Enter the text which you want to encrypt : ");
     fgets(text, sizeof(text), stdin);
		
	 ofstream fout;
	 
	 fout.open((char*)path);	
  
     if(fout==NULL)
     {
		 cout<<"\n\nerr..!!\n\n";
		 exit(0);
	 }
     str = text;

     for (std::size_t i = 0; i < str.size(); i++)
     {
//        cout << bitset<32>(str.c_str()[i]) << endl;
        fout << bitset<32>(str.c_str()[i]) << endl;
     }
     cout<<"\nDone.!";   
	
	fout.close();
}

/*
int main()
{
	RT r("file.dat");

}

*/
