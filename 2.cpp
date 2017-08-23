#include <iostream>
#include <cmath>

double p(double x)
{
	double q = pow(1.0-x,8);
	return q;
}

//////////////////

double q(double x)
{
 double q =1.0 - (8.0*x) +(28.0*x*x) - ( 56.0*x*x*x) + (70.0*x*x*x*x) - (56.0*x*x*x*x*x) + (28.0*x*x*x*x*x*x) - (8.0*x*x*x*x*x*x*x) +(x*x*x*x*x*x*x*x);
 return q;	
}

///////////////////

double r(double x)
{
	double q = 1.0 - 8.0*pow(x,1) + 28.0*pow(x,2) - 56.0*pow(x,3) + 70.0*pow(x,4) - 56.0*pow(x,5) + 28.0*pow(x,6) - 8.0*pow(x,7) + pow(x,8);
	return q;
	
}

/////////////////////

int main()
{
	std::cout.precision(16); std::cout.setf(std::ios::scientific);
	for(double x = 0.992 ; x <= 1.008; x = x +0.0001)
	{	
	
		std::cout<<x<<" \t "<<p(x)<<" \t "<<q(x)<<" \t "<<r(x)<<std::endl;
	}
	return 0;
}
