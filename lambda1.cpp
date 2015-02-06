#include <iostream>
#include <cstdlib>


int main()
{
 auto lambda =[](const char *_s) { std::cout<<"lambda :-"<<_s<<"\n";};
 
 lambda("this is a lambda");
 lambda("seems to ");
 lambda("work ok");
 
	return EXIT_SUCCESS;
}