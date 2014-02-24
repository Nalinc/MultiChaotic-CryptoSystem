#ifndef LORENZ_H
#define LORENZ_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <iomanip>
#include <sstream>
#include <iostream>

#define BEGINl 0                                                      //where to begin the computation
#define ENDl   15                                                     //where to end
#define DTl    0.001                                                  //stepsize in time
#define Nl     3                                                      //number of equations
#define al     10.0						     //constant 'a' in Rossler attractor
#define bl     8.0/3.0						             //constant 'b' in Rossler attractor
#define cl     28.0                                                      //constant 'c' in Rossler attractor

class Lorenz
{
  	    double t, x[Nl], y[Nl], low, high;
  	    bool flag;
  	    std::string s;
		FILE * pFile;
	public:
		double i;
		Lorenz()
		{
			  t = BEGINl;
			  low = -50;
			  high = 50;
			  flag=true;
			  srand((unsigned)time(NULL));
			  
			  x[0] = rand_float(low, high);
			  x[1] = rand_float(low, high);
			  x[2] = rand_float(low, high);

			  y[0] = rand_float(low, high);
			  y[1] = rand_float(low, high);
			  y[2] = rand_float(low, high);
			  init();
		}
		
		double rand_float(double , double );
		void compute(double , double *, double *);
		void init();
		int rk4(int , double , double *, double );
		
};


#endif
