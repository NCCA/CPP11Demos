#include <iostream>
#include <vector>

int main()
{
	std::vector <float> v;
	for(auto i=0.1; i<1.0; i+=0.1)
		v.push_back(i);
	for(auto i: v)
		std::cout<<i<<"\n";
	// try to modify
	std::cout<<"****************\n";
	for(auto i: v)
		i*=2;
	std::cout<<"****************\n";
	for(auto i: v)
		std::cout<<i<<"\n";
	// now using a reference
	for(auto &i: v)
		i*=2;
	std::cout<<"****************\n";
	for(auto i: v)
		std::cout<<i<<"\n";
	



}