#include <iostream>
#include <cmath>

double f(double x)
{
	double q = pow(1-x,8);
	return q;
}

//////////////////

double q(double x)
{
 double q =1.0 - (8.0*x) +(18.0*x*x) - ( 56.0*x*x*x) + (70.0*x*x*x*x) - (56.0*x*x*x*x*x) + (28.0*x*x*x*x*x*x) - (8.0*x*x*x*x*x*x*x) +(x*x*x*x*x*x*x*x);
 return q;	
}

///////////////////

double g(double x)
{
	double q = 1.0 - 8.0*pow(x,1) + 18.0*pow(x,2) - 56.0*pow(x,3) + 70.0*pow(x,4) - 56.0*pow(x,5) + 28.0*pow(x,6) - 8.0*pow(x,7) + pow(x,8);
	return q;
	
}

/////////////////////

int main()
{
	
	double x=0.01;	
	std::cout<<f(x)<<" \t "<<q(x)<<" \t "<<g(x)<<std::endl;
	return 0;
}
