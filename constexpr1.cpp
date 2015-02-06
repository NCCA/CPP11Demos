#include <iostream>
#include <cstdlib>

constexpr int multiply (int x, int y)
{
    return x * y;
}

int main()
{
	const int val = multiply( 10, 10 );
	std::cout<<val<<"\n";
	return EXIT_SUCCESS;
}