#include "../include/Point3D.h"

Point3D::Point3D()
{
    x = 0;
    y = 0;
    z = 0;
}

Point3D::Point3D(float Value)
{
    x = Value;
    y = Value;
    z = Value;
}

Point3D::Point3D(float X, float Y, float Z)
{
    x = X;
    y = Y;
    z = Z;
}

Point3D::Point3D(const Point3D &PointToOperate)
{
    x = PointToOperate.x;
    y = PointToOperate.y;
    z = PointToOperate.z;
}

Point3D::Point3D(const float ComponentArray[3])
{
    x = ComponentArray[0];
    y = ComponentArray[1];
    z = ComponentArray[2];
}

