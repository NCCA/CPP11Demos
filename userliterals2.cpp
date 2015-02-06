#include <iostream>
#include <cstdlib>
#include <cmath>
constexpr long double operator "" _pi(long double x) 
{ return x * M_PI;}
constexpr long double operator "" _pi(unsigned long long int x) 
{ return x * M_PI;} 

int main()
{

	std::cout<<1_pi<<"\n";
	std::cout<<2_pi<<"\n";
	std::cout<<3_pi<<"\n";
	std::cout<<4_pi<<"\n";
		
	return EXIT_SUCCESS;
}

