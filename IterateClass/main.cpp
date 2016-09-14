#include <iostream>
#include <cstdlib>
#include <iostream>
#include <iterator>

#include "PointArray.h"
int main()
{
  PointArray p(20);
  p.fillRandom();

  for(auto d : p)
  {
    std::cout<<d.x <<" "<<d.y<<" "<<d.z<<"\n";
  }


  return EXIT_SUCCESS;
}
