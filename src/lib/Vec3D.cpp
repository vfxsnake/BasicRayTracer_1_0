#include "../include/Vec3D.h"

Vec3D::Vec3D()
{
    x = 0;
    y = 0;
    z = 0;
}

Vec3D::Vec3D(float Value)
{
    x = Value;
    y = Value;
    z = Value;
}

Vec3D::Vec3D(float X, float Y, float Z)
{
    x = X;
    y = Y;
    z = Z;
}

Vec3D::Vec3D(const Vec3D &VectorToOperate)
{
    x = VectorToOperate.x;
    y = VectorToOperate.y;
    z = VectorToOperate.z;
}

Vec3D Vec3D::operator+(const Vec3D &VectorToOperate)
{
    return Vec3D(x + VectorToOperate.x, 
                 y + VectorToOperate.y, 
                 z + VectorToOperate.z
                 );
} 

Vec3D& Vec3D::operator+=(const Vec3D &VectorToOperate)
{
    x + VectorToOperate.x;
    y + VectorToOperate.y;
    z + VectorToOperate.z;
    return *this;
} 

Vec3D Vec3D::operator-(const Vec3D &VectorToOperate)
{
    return Vec3D(x - VectorToOperate.x, 
                 y - VectorToOperate.y, 
                 z - VectorToOperate.z
                 );
}

Vec3D& Vec3D::operator-=(const Vec3D &VectorToOperate)
{
    x - VectorToOperate.x;
    y - VectorToOperate.y;
    z - VectorToOperate.z;
    return *this;
}

Vec3D Vec3D::operator*(float Value)
{
    return Vec3D(x * Value, 
                 y * Value, 
                 z * Value);
}

Vec3D& Vec3D::operator*=(float Value)
{
    x * Value;
    y * Value;
    z * Value;
    return *this;
} 

Vec3D Vec3D::operator/(float Value)
{
    return Vec3D(x / Value, 
                 y / Value, 
                 z / Value);
}

/*
Vec3D& operator/=(float Value);  //assigning new result to the vector
Vec3D& operator=(const Vec3D &VectorToOperate);
float DotProduct(const Vec3D &VectorToOperate); //scalar dot_product
Vec3D CrossProduct(const Vec3D &VectorToOperate);    //cross_product
float Magnitude();  //magnitude of the vector
Vec3D Normalize();   //normalized vector
float Square(); //gives square of the vector
float DistanceTo(const Vec3D &VectorToOperate);
*/