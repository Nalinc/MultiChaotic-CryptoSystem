#include <iostream>
#include "rossler.h"
#include "arnold.h"
#include "RabinoFabrik.h"

//#include "cipher.h"

using namespace std;

int main()
{
	
Arnold arn;
Rossler ros;
RabinoFabrik rf;


cout<<"\n\n#Arnold's Cat synchronising AT STEP: "<<arn.i<<"\n";
cout<<"\n\n#Rossler Attractor synchronising AT STEP: "<<ros.i<<"\n\n";
cout<<"\n\n#RabinoFabik synchronising AT STEP: "<<rf.i<<"\n";


return 0;
}
