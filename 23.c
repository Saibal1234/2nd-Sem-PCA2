// WACP to calculate factorial of a number without using recursion. (using do while loop)
#include<stdio.h> 
void main() 
{ 
    int n,i=1,f=1; 
printf("\n Enter The Number:"); 
scanf("%d",&n); 
    do 
    { 
        f=f*i; 
i++; 
}while(i<=n);  
printf(" The Factorial of %d is %d",n,f); 
}