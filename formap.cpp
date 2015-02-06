#include <iostream>
#include <map>

int main()
{
	std::map<std::string,int> map;
	map["one"]=1;
	map["two"]=2;
	map["three"]=3;
	map["for"]=4;
	for(auto m : map)
	{
		std::cout<<m.first<<" "<<m.second<<"\n";
	}
	

}