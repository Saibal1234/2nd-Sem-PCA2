//  WACP to calculate Simple and Compound interest. 
#include<stdio.h> 
int main() 
{ 
    int c, r, t, s; 
 printf("Enter capital, rate and time period(year) respectively : "); 
 scanf("%d%d%d", &c, &r, &t); 
 s = (c*r*t)/100; 
 printf("Simple interest is %d", s); 
 return 0; 
} 
