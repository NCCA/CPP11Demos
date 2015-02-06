#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <chrono>


const static unsigned int size=100000000;

int main()
{
	std::vector <int> data(size);
	for(int i=0; i<size; ++i)
	{
		data[i]=i;
	}

	unsigned int sum=0;

	auto t0 = std::chrono::high_resolution_clock::now();

	for(std::vector<int>::size_type i=0; i<data.size(); ++i)
		sum += data[i];
	auto t1 = std::chrono::high_resolution_clock::now();
	std::chrono::milliseconds totalMs = std::chrono::duration_cast<std::chrono::milliseconds>(t1 - t0);
	std::cout<<"using standard vector "<<sum<<" took "<<totalMs.count()<<" Ms \n";


	sum = 0;
	t0 = std::chrono::high_resolution_clock::now();
	for_each(data.begin(),data.end(), // algorithm + lambda
	 [&sum](int x) {sum += x; });
	t1 = std::chrono::high_resolution_clock::now();

	std::cout<<"using standard lambda "<<sum<<" took "<<totalMs.count()<<" Ms \n";

	return EXIT_SUCCESS;
}