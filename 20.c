// . Any year is entered through keyboard. WACP to determine whether the year is a leap 
// year or not. (using conditional operators).
#include <stdio.h> 
int main() { 
   int year; 
printf("Enter a year: "); 
scanf("%d", &year); 
if (year % 4 == 0) { 
printf("%d is a leap year.", year); 
   } 
   else { 
printf("%d is not a leap year.", year); 
   } 
   return 0; 
} 