// Rossler attractor for synchronizing two systems
#include "rossler.h"

using namespace std;

double Rossler::rand_float(double low, double high)
{
    return ( ( double )rand() * ( high - low ) ) / ( double )RAND_MAX + low;
}


void Rossler::compute(double x, double *y, double *eq) 
{
  eq[0] = - y[1] - y[2];
  eq[1] = y[0] + (a * y[1]);
  eq[2] = b + (y[2] * y[0]) - (y[2] * c);
}

void Rossler::init()
{
  pFile = fopen ("rossler_datum.dat","w");

  printf("# SYSTEM: Rossler Attractor--- \n");
  printf("# The initial values are : \n");
  printf("# x[0] = %f \n", x[0]);
  printf("# x[1] = %f \n", x[1]);
  printf("# x[2] = %f \n", x[2]); 
  printf("# y[0] = %f \n", y[0]);
  printf("# y[1] = %f \n", y[1]);
  printf("# y[2] = %f \n", y[2]);

  printf("# :: OUTPUT :: \n");
std::cout<<"# T"<<setw(15)<<" X[0]"<<setw(15)<<" X[1]"<<setw(15)<<" X[2]"<<setw(15)<<" Y[0]"<<setw(15)<<" Y[1]"<<setw(15)<<" Y[2]\n\n";

fprintf(pFile,"# SYSTEM: Rossler Attractor--- \n");
fprintf(pFile,"#\tt\t\t\tx[0] \t\t\t x[1] \t\t\t x[2] \t\t\t y[0] \t\t\t y[1] \t\t\t y[2] \n");

 
  for(t=BEGIN; t<=END; t+=DT)
  {
     x[1] = y[1];
     rk4(N, t, x, DT);
     rk4(N, t, y, DT);

  std::cout<<fixed<<setprecision(6)<<t<<setw(15)<<x[0]<<setw(15)<<x[1]<<setw(15)<<x[2]<<setw(15)<<y[0]<<setw(15)<<y[1]<<setw(15)<<y[2]<<"\n";

fprintf (pFile, "%10.6f \t  %10.6f \t  %10.6f \t  %10.6f \t  %10.6f \t  %10.6f \t  %10.6f \n", t, x[0], x[1], x[2], y[0], y[1], y[2]);


     { 
	   std::ostringstream ss;
	   ss<<std::fixed<<std::setprecision(6)<<fabs(y[0]-x[0])<<fabs(y[1]-x[1])<<fabs(y[2]-x[2]);  
       s = ss.str();
      }
	 if(s=="0.0000000.0000000.000000" && flag)
     {
        i = t;
        flag=false;
//        break;
     }

  }

fprintf(pFile,"\n#Synchronisation Step: %f",i);

fclose (pFile);
}


/*   Parameters of rk4 
     n                  :     the number of equations to be solved
     x                  :     where you are on the x-axis
     *y                 :     pointer to y values corresponding to x
     h                  :     size of the step in x direction
     comp               :     pointer to function to compute the values of the differential equations with *y and x   */



int Rossler::rk4(int n, double x, double *y, double h)
{
  double k1[n], k2[n], k3[n], k4[n], ytmp[n];
  int j; 

  for(j=0; j<n; j++)                                                 //Calculation of k1 for all equations
     ytmp[j] = y[j];

  compute(x, ytmp, k1);

  for(j=0; j<n; j++)                                                 //Calculation of k2 for all equations
     ytmp[j] = y[j] + (0.5 * h * k1[j]);

  compute(x + (0.5 * h), ytmp, k2);

  for(j=0; j<n; j++)                                                 //Calculation of k3 for all equations
     ytmp[j] = y[j] + (0.5 * h * k2[j]);

  compute(x + (0.5 * h), ytmp, k3);

  for(j=0; j<n; j++)                                                 //Calculation of k4 for all equations
     ytmp[j] = y[j] + (h * k3[j]);

  compute(x + h, ytmp, k4);

  for(j=0; j<n; j++)
     y[j] = y[j] + h * ( k1[j] + 2.0 * k2[j] + 2.0 * k3[j] + k4[j] )/6.0;

  return 1;

}
