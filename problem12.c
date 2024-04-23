// WACP to convert temperature in degree F to degree C and vice versa.
#include<stdio.h> 
int main(){ 
    char t; 
    printf("Enter input type ('c' for Celsius & 'f' for Farenhite) : "); 
    scanf("%c", &t); 
    if(t=='c') 
    { 
     float c; 
     printf("Enter temperature in Celsius : "); 
     scanf("%f", &c); 
     float f= 9*c/5 + 32; 
     printf("Temperature in Farenhite is : %f", f); 
 } 
 else 
 { 
  float f; 
     printf("Enter temperature in Farenhite : "); 
     scanf("%f", &f); 
     float c= (f-32)*5/9; 
     printf("Temperature in Farenhite is : %f", c); 
 } 
}