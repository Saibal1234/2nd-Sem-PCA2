// WACP to swap two integer numbers without using 3rd Variable.
#include<stdio.h> 
int main() 
{ 
     int a, b; 
 printf("Enter a and b : "); 
 scanf("%d%d", &a, &b); 
 a=a+b; 
 b=a-b; 
 a=a-b; 
 printf("a = %d, b = %d", a, b); 
 return 0; 
}