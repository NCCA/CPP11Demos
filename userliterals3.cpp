#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>

std::string operator "" _UP(const char* s, std::size_t n) 
{
    std::string str(s,n);
    for (auto &c: str)
    {       
       c = toupper(c);
    }
    return str;
} 

std::string operator "" _LOWER(const char* s, std::size_t n) 
{
    std::string str(s,n);
    for (auto &c: str)
    {       
       c = tolower(c);
    }
    return str;
} 
int main()
{
	std::cout<<"this is lower or is it?"_UP<<"\n";
	std::cout<<"THIS IS UPPER OR IS IT?"_LOWER<<"\n";
		
	return EXIT_SUCCESS;
}

