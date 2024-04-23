// WACP to find the area and circumference of a circle. (value of radius must be given 
//  by user and use the concept of symbolic constants)
#include<stdio.h> 
#define pi 3.14 
int main() 
{ 
    float r, a, c; 
 printf("Enter radius of the circle : "); 
 scanf("%f", &r); 
 a = pi*r*r; 
 c=2*pi*r; 
 printf("area is = %f, circumference is = %f", a, c); 
 return 0; 
}