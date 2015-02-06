#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <iomanip>   

constexpr double operator "" _const(char16_t c) 
{     
    return (c == u'π' ? 3.141592653589793 
                      : (c == u'e' ? 2.718281828459045 : 0));
} 

int main()
{
	std::cout << std::setprecision(16) << u'π'_const << std::endl;
	std::cout << u'e'_const << std::endl;   
		
	return EXIT_SUCCESS;
}

