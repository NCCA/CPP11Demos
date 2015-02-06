#include <iostream>
#include <vector>

int main()
{
	std::vector <std::string > v=
	{	
	std::string("see"),
	std::string("if"),
	std::string("this"),
	std::string("works"),
	};

	for(auto  i: v)
		std::cout<<i<<"\n";


}