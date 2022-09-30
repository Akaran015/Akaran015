#include<stdio.h>
#include<conio.h>
#include"library.h"


void main()
{
    double distance;
    double lat1 = 23.259933, lat2 = 12.9716, lon1 = 77.412613, lon2 = 77.5946;
    
    distance = find_distance(lat1,lat2,lon1,lon2);
    
    printf("Distance Between Saurabh Sir and Prateek Sir: %lf kilometers\n",distance);
}