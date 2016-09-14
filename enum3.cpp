#include <iostream>


enum class access{IN,OUT,BOTH};

int main()
{
	int data[3]={1,2,3};
	std::cout<<data[static_cast<int>(access::IN)]<<"\n";
}