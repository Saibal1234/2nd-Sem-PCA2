// WACP to swap two integer numbers using bitwise operators.
#include<stdio.h> 
int main(){ 
    int a, b; 
    printf("Ente two numbers a and b: "); 
    scanf("%d%d", &a, &b); 
    a=a^b; 
    b=a^b; 
    a=a^b; 
    printf("a = %d, b = %d", a, b); 
    return 0; 
} 
