#include <iostream>
#include <cmath>

double suma1(int N)
{
	double suma = 0;
	for(int i =1; i <= N; i++)
	{
		suma = suma + 1.0/(pow(i,2));
	}
	return suma;
}

////////////////////////////

double suma2(int N)
{
	double suma = 0;
	for(int i =N; i >= 1; i--)
	{
		suma = suma + 1.0/pow(i,2);
		
	}	
	return suma;
	
}

int main()
{
	std::cout.precision(16); std::cout.setf(std::ios::scientific);
	int N = 1000;
	double dir1,dir2;
	for(int i=0; i<=N; i++)
	{
	//std::cout<<i<<" \t "<<suma1(i)<<" \t "<<suma2(i)<<std::endl;
	dir1 = 100*(((pow(3.141592654,2)/2.0)-suma1(i))/(pow(3.141592654,2)/2.0));
	dir2 = 100*(((pow(3.141592654,2)/2.0)-suma2(i))/(pow(3.141592654,2)/2.0));
	std::cout<<i<<" \t "<<dir1<<" \t "<<dir2<<" \t "<<dir1-dir2<<std::endl;
	}
	return 0;
	
}
