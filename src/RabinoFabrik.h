#ifndef RABINOFABRIK_H
#define RABINOFABRIK_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <iomanip>
#include <sstream>
#include <iostream>

#define BEGIN 0                              //where to begin the computation
#define END   50                             //where to end
#define DT    0.001                          //stepsize in time
#define N     3                              //number of equations
#define alpha     1.1						     //constant 'a' in Rabinovich-Fabrikant
#define gamma 0.87						     //constant 'gamma' in Rabinovich-Fabrikant

class RabinoFabrik
{
  	    double t, x[N], y[N], low, high;
  	    bool flag;
  	    std::string s;
		FILE * pFile;
	public:
		double i;
		RabinoFabrik()
		{
			  t = BEGIN;
			  low = 0;
			  high = 1;
			  flag=true;
			  srand((unsigned)time(NULL));
			  
			  x[0] = rand_float(-1.99999, -1.00000);
			  x[1] = rand_float(low, high);
			  x[2] = rand_float(low, high);

			  y[0] = rand_float(-1.99999, -1.00000);
			  y[1] = rand_float(low, high);
			  y[2] = rand_float(low, high);


/*

			  x[0] = -1;
			  x[1] = 0;
			  x[2] = 0.5;


			  y[0] = -1.12345;
			  y[1] = 0.12345;
			  y[2] = 0.54321;

*/
			  init();
		}
		
		double rand_float(double , double );
		void compute(double , double *, double *);
		void init();
		int rk4(int , double , double *, double );
		
};


#endif
