#include <iostream>
#include <cstdlib>
#include <cmath>

class Circle
{
  public:
    constexpr Circle(float _x, float _y, float _radius) : m_x(_x), m_y(_y), m_radius(_radius) {}
    constexpr double getArea() const
    {
        return m_radius * m_radius * M_PI;
    }

  private:
    float m_x = 0.0f;
    float m_y = 0.f;
    float m_radius = 1.0f;
};

int main()
{
    constexpr Circle c(0.0, 0.0, 10.5);
    constexpr double area = c.getArea();
    std::cout << area << '\n';
    Circle c2(0.0, 0.0, 2.4);
    std::cout << c2.getArea() << '\n';
    return EXIT_SUCCESS;
}