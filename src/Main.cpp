#include <iostream>

#include "Geometry.hpp"

int main()
{
    double x,y,z;
    std::cin >> x >> y >> z;
    geometry::point_t p(x,y,z);
    geometry::point_t p1(1,2,3);

    p.print();
    std::cout << p.equal(p1);
    
    return 0;
}