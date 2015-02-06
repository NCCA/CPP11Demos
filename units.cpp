#include <iostream>
#include <cstdlib>


template<int M, int K, int S> struct Unit
{ // a unit in the MKS system
 enum { m=M, kg=K, s=S };
};

template<typename Unit> // a magnitude with a unit
struct Value
{
 double val; // the magnitude
 explicit Value(double d) : val(d) {} // construct a Value from a double
};

using Second = Unit<0,0,1>; // unit: sec
using Second2 = Unit<0,0,2>; // unit: second*second

constexpr Value<Second> operator"" _s(long double d)
 // a f-p literal suffixed by ‘s’
{
 return Value<Second> (d);
}

constexpr Value<Second2> operator"" _s2(long double d)
 // a f-p literal suffixed by ‘s2’
{
 return Value<Second2> (d);
}

int main()
{
	Speed sp1 = 100m/9.8_s; // very fast for a human
	double sp2 = 100m/9.8_s2; // error (m/s2 is acceleration)
	double sp3 = 100/9.8_s; // error (speed is m/s and 100 has no unit)
	double acc = sp1/0.5_s; // too fast for a human

	return EXIT_SUCCESS;
}