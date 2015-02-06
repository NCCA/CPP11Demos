#include <iostream>
#include <vector>

const static int ASIZE=2;
constexpr int withPad(int _pad) {return ASIZE+_pad;}

int main()
{
	std::cout <<"enter pad";
	int pad;
	std::cin >> pad;

	int v[withPad(pad) ];
	for(auto &i: v)
		i=0;

	for(auto i: v)
		std::cout<<i<<"\n";
}


