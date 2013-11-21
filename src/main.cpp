#include "rossler.h"
#include "arnold.h"
#include "RabinoFabrik.h"

//#include "cipher.h"
/*
  
 ./run	 									:GUI interface
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
	
Arnold arn;
Rossler ros;
RabinoFabrik rf;


cout<<"\n\n#Arnold's Cat synchronising AT STEP: "<<arn.i<<"\n";
cout<<"\n\n#Rossler Attractor synchronising AT STEP: "<<ros.i<<"\n";
cout<<"\n\n#RabinoFabik synchronising AT STEP: "<<rf.i<<"\n";


return 0;
}
