#pragma once

class Point3D
{/**
* One-line description of the class
*
* Paragraph describing the class
*/
public:
    float x, y, z;

    Point3D();
   
    Point3D(float X, float Y, float Z);

    float operator[](int Index);
};