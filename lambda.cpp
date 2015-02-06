#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
 // Create a vector object that contains 10 elements.
 std::vector<int> v;
 for (int i = 0; i < 13; ++i)
 {
		v.push_back(i);
 }
 
   
int evenCount = 0;
int total=0;
auto countEvenOdd=[&evenCount,&total] (int n)
{
	std::cout << n;

	if (n % 2 == 0)
	{
		std::cout << " is even \n";
		evenCount++;
	}
	else
	{
		std::cout << " is odd\n" ;
	}
	++total;
};


for_each(v.begin(), v.end(),countEvenOdd );

std::cout << "There are " << evenCount
<< " even numbers in the vector out of "<<total<<" elements\n";

}