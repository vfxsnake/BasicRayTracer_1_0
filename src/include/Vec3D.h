#pragma once
#include <string>
#include "Point3D.h"

class Vec3D : public Point3D
{   
public:
    Vec3D();
    Vec3D(float Value);
    Vec3D(float X, float Y, float Z);
    Vec3D(const Vec3D &VectorToOperate);    //copy constructor
    Vec3D operator+(const Vec3D &VectorToOperate);    //addition
    Vec3D &operator+=(const Vec3D &VectorToOperate);  ////assigning new result to the vector
    Vec3D operator-(const Vec3D &VectorToOperate);    //subtraction
    Vec3D &operator-=(const Vec3D &VectorToOperate);  //assigning new result to the vector
    Vec3D operator*(float Value);    //multiplication
    Vec3D &operator*=(float Value);  //assigning new result to the vector.
    Vec3D operator/(float Value);    //division
    Vec3D &operator/=(float Value);  //assigning new result to the vector
    Vec3D &operator=(const Vec3D &VectorToOperate);
    float DotProduct(const Vec3D &VectorToOperate); //scalar dot_product
    Vec3D CrossProduct(const Vec3D &VectorToOperate);    //cross_product
    float Magnitude();  //magnitude of the vector
    Vec3D Normalize();   //normalized vector
    float Square(); //gives square of the vector
    float DistanceTo(const Vec3D &VectorToOperate); 
    std::string ToString();
};

