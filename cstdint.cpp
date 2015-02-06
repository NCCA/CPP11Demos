#include <cstdint>
#include <iostream>
#include <cstdlib>

int main()
{
std::int8_t int8;
std::int16_t int16;
std::int32_t int32;
std::int64_t int64;
std::uint8_t uint8;

std::cout <<"std::int8_t = " <<sizeof(int8)<<"\n";
std::cout <<"std::int16_t = " <<sizeof(int16)<<"\n";
std::cout <<"std::int32_t = " <<sizeof(int32)<<"\n";
std::cout <<"std::int64_t = " <<sizeof(int64)<<"\n";
std::cout <<"std::uint8_t = " <<sizeof(uint8)<<"\n";


}