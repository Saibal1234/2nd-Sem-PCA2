// . WACP to print the first n integer numbers divisible by 7(using for and if statement)
#include<stdio.h> 
int main() 
{ 
  int i,a=7,n; 
scanf("%d",&n); 
printf("Numbers divisible by 7 are:"); 
  for(i=1;i<=n;i++) 
  { 

 
    if(i%a==0) 
    { 
printf("%d",i); 
    } 
  } 
  return 0; 
}