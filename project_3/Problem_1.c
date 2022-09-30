#include<stdio.h>
#include<conio.h>
#include"library.h"

void main()
{
    double angle_at_chawk;
    float coffi_x1 = 5 , coffi_x2 = 2 , coffi_y1 = 1, coffi_y2 = 3;
    
    angle_at_chawk = find_angle(coffi_x1,coffi_x2,coffi_y1,coffi_y2);
    
    printf("Angle at which these roads meets at 123 Chowk: %lf Degree\n",angle_at_chawk);
}