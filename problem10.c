// WACP to calculate sum of digits of a five digit numbers. (do not use any loop 
// construct)
#include<stdio.h> 
int main(){ 
    int a,d,m,sum=0; 
    printf("Enter a number: "); 
    scanf("%d", &a); 
    for(d=0,m=a;m>0;m=m/10,d++);
     printf("Digit of the number is %d\n",d);
     for(int i=1;i<=d;i++){
        int r=a%10;
        sum=sum+r;
        a=a/10;
     }
    printf("The sum is %d\n", sum); 
    return 0; 
}