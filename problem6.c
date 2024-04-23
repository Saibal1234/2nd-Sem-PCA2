// WACP to swap two integer numbers using 3rd Variable.
#include<stdio.h> 
int main() 
{ 
    int a, b, c; 
 printf("Enter a and b : "); 
 scanf("%d%d", &a, &b); 
 c=a; 
 a=b; 
 b=c; 
 printf("a = %d, b = %d", a, b); 
 return 0; 
}