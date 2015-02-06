#include <iostream>
#include <cstdlib>

constexpr long double operator"" _mm(long double x) { return x*1000; }
constexpr long double operator"" _cm(long double x)  { return x*100; }
constexpr long double operator"" _m(long double x)  { return x; }
constexpr long double operator"" _inch(long double x)  { return x*39.370; }
constexpr long double operator"" _foot(long double x)  { return x*3.2808; }
constexpr long double operator"" _yard(long double x)  { return x*1.0936; }

int main()
{
	std::cout<<"20 Meters converted\n";
	std::cout<<20.0_mm<<" "<<20.0_cm<<" "<<20.0_m<<"\n";
	std::cout<<20.0_inch<<" "<<20.0_foot<<" "<<20.0_yard<<"\n";
	return EXIT_SUCCESS;
}

