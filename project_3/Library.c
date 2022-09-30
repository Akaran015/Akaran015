#include<math.h>
#include<stdio.h>
const double PI = 3.141592;
double find_angle(float coffi_x1 , float coffi_x2 , float coffi_y1 , float coffi_y2)
{
    float a;
    float b;
    float m1 , m2;
    m1 = (-coffi_x1)/coffi_y1;
    m2 = (-coffi_x2)/coffi_y2;
    a = m2-m1; 
    b = 1+(m1*m2);
    double result = atan2(a,b) * 180/PI;
    return result;
}

double find_distance(double lat1 , double lat2 , double lon1 , double lon2)
{

    lat1 = lat1 * PI / 180;
    lat2 = lat2 * PI / 180;
    lon1 = lon1 * PI / 180;
    lon2 = lon2 * PI / 180;

    double result = 6371 * acos(sin(lat1)*sin(lat2) + cos(lat1)*cos(lat2)*cos(lon2 - lon1));
    return result;
}

double find_area(double x1, double x2, double x3, double y1, double y2, double y3)
{
    double Area = (x1*y2 + x2*y3 + x3*y1 - x2*y1 - x3*y2 - x1*y3)/2;
    if(Area < 0)
    {
        Area = -Area;
    }
    return Area;
}