#include "arnold.h"
#include <iostream>
#include <iomanip>

using namespace std;


void Arnold::createChaos(double &x, double &y)
{
    x=fmod(2*x+y,n);
    y=fmod(x+y,n);
}

double Arnold::getRandDouble(double high, double low)
{
    return (low+((double)rand()/RAND_MAX)*(high-low));
}


void Arnold::init()
{
pFile = fopen ("./arnold_datum.dat","w");

cout<<"# T"<<setw(20)<<" X1"<<setw(20)<<" Y1"<<setw(20)<<" X2"<<setw(20)<<" Y2\n";
cout<<"#----------------------------------------------------------------------------------\n\n";

fprintf(pFile,"# SYSTEM: Arnold's Cat map--- \n");
fprintf(pFile,"#\t\tt  \t\t\t  x1 \t\t\t y1 \t\t\t x2 \t\t\t y2 \n");

   for(t=0.000;t<0.1;t+=0.001)
  {
     x1=x2;
     createChaos(x1,y1);
     createChaos(x2,y2);

     cout<<fixed<<setprecision(6)<<t<<setw(20)<<x1<<setw(20)<<y1<<setw(20)<<x2<<setw(20)<<y2<<"\n";
     fprintf (pFile, "%10.6f \t  %10.6f \t  %10.6f \t  %10.6f \t  %10.6f \n", t, x1, y1, x2, y2);

     if((float)fabs(x2-x1) == 0.00 && (float)fabs(y2-y1) == 0.00&&flag)
     {
         i = t;
         flag=false;
//        break;
//We arnt making much of the iterations in ACM so there's no harm in skipping the break
//^shortens the CODE ^_^
     }
  }

fprintf(pFile,"\n#Synchronisation Step: %f",i);

fclose (pFile);

}

