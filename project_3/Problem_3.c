#include<stdio.h>
#include<conio.h>
#include"library.h"

void main()
{
    double area_under_a;
    double x1 = 20.077, x2 = 26.526, x3 = 23.674, y1 = 11.598, y2 = 90.138, y3 = 32.579;
    
    area_under_a = find_area(x1,x2,x3,y1,y2,y3);
    
    printf("Area to be coloured black: %lf sq.unit\n",area_under_a);
}