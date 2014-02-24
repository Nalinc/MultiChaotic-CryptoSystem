#ifndef ARNOLD_H
#define ARNOLD_H

#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <iostream>
#include <stdio.h>
class Arnold
{
    int n;
    double t,x1,y1,x2,y2;
    double high,low;
    bool flag;
    FILE * pFile;

public:
    double i;
    void createChaos(double&,double&);
    double getRandDouble(double high, double low);
    void init();

    Arnold()
    {
        flag=true;
        high=0.54637281, low=-0.54637281;
        srand((unsigned)time(NULL));
        srand((unsigned)time(NULL));

        n=(1+(rand()/RAND_MAX)*(7-1));
        x1=getRandDouble(high,low);
        y1=getRandDouble(high,low);
        x2=getRandDouble(high,low);
        y2=getRandDouble(high,low);
    //	std::cout<<"\nflag= "<<flag<<"\nhigh= "<<high<<"\nlow= "<<low<<"\nN= "<<N<<"\nx1= "<<x1<<"\nx2= "<<x2<<"\ny1= "<<y1<<"\ny2= "<<y2<<"\n";
        init();
    }

};



#endif // ARNOLD_H
