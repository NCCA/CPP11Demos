#include <iostream>
#include <cstdlib>

constexpr unsigned long int factorial (unsigned long int n)
{
    return n > 0 ? n * factorial( n - 1 ) : 1;
}


int main()
{
	const unsigned long int big=factorial(2223432234233433405);
	int a;
	std::cout<<"enter a value>";
	std::cin >>a;
	std::cout<<"big is "<<big<<" a! is "<<factorial(a)<<"\n";

return EXIT_SUCCESS;
}