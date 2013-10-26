#include <iostream>
#include "rossler.h"
#include "arnold.h"
//#include "cipher.h"

using namespace std;

int main()
{
	
Arnold arn;
Rossler ros;

cout<<"\n\n#Arnold's Cat synchronising AT STEP: "<<arn.i<<"\n";
cout<<"\n\n#Rossler Attractor synchronising AT STEP: "<<ros.i<<"\n\n";


return 0;
}
