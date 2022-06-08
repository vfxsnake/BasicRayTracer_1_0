#include <iostream>
#include "include/Point3D.h"
#include "include/Vec3D.h"

int main()
{
    Point3D TestPoint = Point3D();
    std::cout << "point is : " << TestPoint.x << "\n";
    std::cout << "end of ray tracing \n";
    
    std::cout << "----------------------- \n";
    Vec3D Test{1.0, 2.0, 3.0};
    std::cout << Test.ToString() << "\n";
    std::cout << Test.Normalize().ToString() << "\n";
    std::cout << Test.Magnitude() << "\n";
}