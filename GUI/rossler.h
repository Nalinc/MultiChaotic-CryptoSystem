#ifndef ROSSLER_H
#define ROSSLER_H


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <iomanip>
#include <sstream>
#include <iostream>

#define BEGIN 0                                                      //where to begin the computation
#define END   50                                                     //where to end
#define DT    0.001                                                  //stepsize in time
#define N     3                                                      //number of equations
#define a     0.432						     //constant 'a' in Rossler attractor
#define b     2						             //constant 'b' in Rossler attractor
#define c     4                                                      //constant 'c' in Rossler attractor

class Rossler
{
        double t, x[N], y[N], low, high;
        bool flag;
        std::string s;
        FILE * pFile;
    public:
        double i;
        Rossler()
        {
              t = BEGIN;
              low = -0.01;
              high = 0.01;
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


#endif // ROSSLER_H
