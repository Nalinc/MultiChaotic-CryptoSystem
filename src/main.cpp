#include "rossler.h"
#include "lorenz.h"
#include "encrypt.h"
#include "decrypt.h"
#include "ReadText.h"
#include "RabinoFabrik.h"
#include <string.h>

//#include "cipher.h"
/*
  
USAGE:
	 ./run.sh -GUI(default)			:Enables GUI Mode
	 ./run.sh -CLI -[t|i|a|v]		:Enables CLI Mode
	 ./run.sh -help				:Displays usage/help section
	 ./run.sh -sync				:(Re)Synchronizes chaotic systems
	 ./run.sh -p chaos			:Plots Chaotic Maps

	 ./run.sh -et <filename>		:Encrypts Text as given in <filename>
	 ./run.sh -ei <imgname>			:Encrypts Image named <imgname>
	 ./run.sh -e[a|v] <filename>		:Encrypts audio/video named <filename>

	 ./run.sh -dt <filename>		:Decrypts Text as given in <filename>
	 ./run.sh -di <filename>		:Decrypts Image named <filename>
	 ./run.sh -d[a|v] <filename>		:Decrypts audio/video named <filename>


 */

using namespace std;

int main(int argc, char **argv)
{
	
bool flag=true;

/*
if(argc==1 || (argc==2 && strcmp(argv[1],"-GUI")))
{
    cout<<"\n\nSHOW GUI\n\n";
}
else 
*/
if((argc==2 && strcmp(argv[1],"-sync")==0 )|| (argc==3 && strcmp(argv[1],"-CLI")==0) )
{
	label:

	//Synchronize Systems

	Lorenz l;
	Rossler ros;
	RabinoFabrik rf;

	cout<<"\n\n#Lorenz Attractor synchronising AT STEP: "<<l.i<<"\n";
	cout<<"\n\n#Rossler Attractor synchronising AT STEP: "<<ros.i<<"\n";
	cout<<"\n\n#RabinoFabik synchronising AT STEP: "<<rf.i<<"\n";

    if(strcmp(argv[1],"-CLI")==0)
    goto loc;
}
if(argc==2 && (strcmp(argv[1],"-GUI")==0)  )
{
	//TODO
}
 if(argc==3  && strcmp(argv[1],"-ei")==0)
{
	//argv[2] contains filename
	cout<<"Code To encrypt Image\n";
}
 if(argc==3  && strcmp(argv[1],"-et")==0)
{
	//argv[2] contains filename
	//./run.sh -et FILENAME
	loc:
		
	cout<<"\nCode To encrypt Text\n";
	
	RT r(argv[2]);
	Encrypt obj1("text",argv[2]);
}
 if(argc==3  && (strcmp(argv[1],"-ea")==0 || strcmp(argv[1],"-ev")==0))
{
	//argv[3] contains filename
	cout<<"Code To encrypt Audio/video\n";
	Encrypt obj1("av",argv[2]);
	cout<<"done";

}
 if(argc==3  && strcmp(argv[1],"-di")==0)
{
	//argv[2] contains filename
	cout<<"Code To decrypt Image\n";
}
 if(argc==3  && strcmp(argv[1],"-dt")==0)
{
	//argv[2] contains filename
		
	cout<<"\nCode To decrypt Text\n";	
	Decrypt obj1("text",argv[2]);
}
 if(argc==3  && (strcmp(argv[1],"-da")==0 || strcmp(argv[1],"-dv")==0))
{
	//argv[3] contains filename
	cout<<"Code To decrypt Audio/video\n";
	Decrypt obj1("av",argv[2]);
}


return 0;
}

