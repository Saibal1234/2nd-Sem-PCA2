// . WACP to check whether a number is palindrome or not. (using while and if statement)
#include <stdio.h> 
int main(){  
 
   int num, temp, rem, rev = 0; 
printf("enter a number:"); 
scanf("%d", &num); 
   temp = num; 
   while ( temp> 0){ 
      rem = temp %10; 
      rev = rev *10+ rem; 
      temp = temp /10; 
   } 
   if ( num == rev ) 
printf("%d is Palindrome Number. ", num); 
   else 
printf("%d is not the Palindrome Number.", num); 
   return 0; 
} 
 