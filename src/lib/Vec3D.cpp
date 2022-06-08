#include "../include/Vec3D.h"
#include <cmath>
#include <string>
#include <format>

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

Vec3D& Vec3D::operator/=(float Value)
{
    x / Value;
    y / Value;
    z / Value;
    return *this;
}  //assigning new result to the vector

Vec3D& Vec3D::operator=(const Vec3D &VectorToOperate)
{
    x = VectorToOperate.x;
    y = VectorToOperate.y;
    z = VectorToOperate.z;
    return *this;
}

float Vec3D::DotProduct(const Vec3D &VectorToOperate)
{
    return x * VectorToOperate.x + VectorToOperate.y * y + VectorToOperate.z * z;
}

Vec3D Vec3D::CrossProduct(const Vec3D &VectorToOperate)
{
    float ni= y * VectorToOperate.z - z * VectorToOperate.y;
    float nj= z * VectorToOperate.x - x * VectorToOperate.z;
    float nk= x * VectorToOperate.y - y * VectorToOperate.x;
    return Vec3D(ni,nj,nk);
}

float Vec3D::Magnitude()
{
    return sqrt(  powf(x, 2) 
                + powf(y, 2)
                + powf(z, 2) );
}  //magnitude of the vector

Vec3D Vec3D::Normalize()
{
    float Vector_Magnitude = this->Magnitude();
    return Vec3D(x / Vector_Magnitude, y / Vector_Magnitude, z / Vector_Magnitude);
}   //normalized vector

float Vec3D::DistanceTo(const Vec3D &VectorToOperate)
{
    return (*this - VectorToOperate).Magnitude();
}

std::string Vec3D::ToString()
{

    return  "(" 
            + std::to_string(x) 
            + "," 
            + std::to_string(y) 
            + "," 
            + std::to_string(z) 
            + ")";
}