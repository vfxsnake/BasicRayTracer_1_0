#pragma once

class Point3D
{/**
* Representation of a 3d point in the cartesian space
*
* can be assigned and queried from it's class variables or element index 
* 
*/
public:
    float x, y, z;

    Point3D();
    Point3D(float Value);
    Point3D(float X, float Y, float Z);
    Point3D(const Point3D& PointToOperate);
    Point3D(const float componentArray[3]);
    float operator[](int Index);
};