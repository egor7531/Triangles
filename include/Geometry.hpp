#include <cmath>
#include <limits>
#include <iostream>

#pragma once

namespace geometry
{
    class point_t
    {
            double  x_ = 0,
                    y_ = 0,
                    z_ = 0;

            const double EPSILON = std::numeric_limits<double>::epsilon();

        public:
            point_t (double x, double y, double z): x_(x), y_(y), z_(z) {}
            void print() const { std::cout << "x = " << x_ << " y = " << y_ << " z = " << z_ << std::endl; }
            bool equal (const point_t &p) const 
            { 
                return fabs(p.x_ - x_) < EPSILON && fabs(p.y_ - y_) < EPSILON && fabs(p.z_ - z_) < EPSILON;
            }
    };
}