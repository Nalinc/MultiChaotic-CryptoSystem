#include "rossler.h"
#include "arnold.h"
#include "RabinoFabrik.h"
#include "encrypt.h"
#include "decrypt.h"
#include "ReadText.h"
#include <string.h>

//#include "cipher.h"
/*
  
 ./run -GUI									:GUI interface
 ./run -CLI
 ./run -help                                :Displays Help
 ./run -sync								:synchronizes the systems
 ./run -p chaos								:plots 

 ./run -e -t filename
 ./run -e -i filename
 ./run -e -[a|v] filename

 ./run -d -t filename
 ./run -d -i filename
 ./run -d -[a|v] filename

 */

using namespace std;

int main(int argc, char **argv)
{
	
bool flag=true;

if(argc==1 || (argc==2 && strcmp(argv[1],"-GUI")))
{
    cout<<"\n\nSHOW GUI\n\n";
}
else if(argc==2 && (strcmp(argv[1],"-sync")==0)  )
{
	label:

	//Synchronize Systems
	Arnold arn;
	Rossler ros;
	RabinoFabrik rf;

	cout<<"\n\n#Arnold's Cat synchronising AT STEP: "<<arn.i<<"\n";
	cout<<"\n\n#Rossler Attractor synchronising AT STEP: "<<ros.i<<"\n";
	cout<<"\n\n#RabinoFabik synchronising AT STEP: "<<rf.i<<"\n";

    flag=false;
}
 if((argc==4 || argc==5) && strcmp(argv[1],"-e")==0 && strcmp(argv[2],"-i")==0)
{
	//argv[3] contains filename
	if(argc==5 && strcmp(argv[4],"-all")==0 && flag)
	  goto label;

	cout<<"Code To encrypt Image\n";
}
 if((argc==4 || argc==5)&& strcmp(argv[1],"-e")==0 && strcmp(argv[2],"-t")==0 )
{
	//argv[3] contains filename
	if(argc==5 && strcmp(argv[4],"-all")==0 && flag)
	  goto label;
		
	cout<<"\nCode To encrypt Text\n";
	
	RT r(argv[3]);
	Encrypt obj1("text",argv[3]);
}
 if((argc==4 || argc==5) && strcmp(argv[1],"-e")==0 && (strcmp(argv[2],"-a")==0 || strcmp(argv[2],"-v")==0))
{
	//argv[3] contains filename
	if(argc==5 && strcmp(argv[4],"-all")==0 && flag)
	  goto label;

	cout<<"Code To encrypt Audio/video\n";
}
 if(argc==4 && strcmp(argv[1],"-d")==0 && strcmp(argv[2],"-i")==0)
{
	//argv[3] contains filename
	cout<<"Code To decrypt Image\n";
}
 if(argc==4 && strcmp(argv[1],"-d")==0 && strcmp(argv[2],"-t")==0 )
{
	//argv[3] contains filename
		
	cout<<"\nCode To decrypt Text\n";
	
	Decrypt obj1("text",argv[3]);
}
 if(argc==4  && strcmp(argv[1],"-d")==0 && (strcmp(argv[2],"-a")==0 || strcmp(argv[2],"-v")==0))
{
	//argv[3] contains filename

	cout<<"Code To decrypt Audio/video\n";
}


return 0;
}
