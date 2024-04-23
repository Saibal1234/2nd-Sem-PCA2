// WACP to find the average of five numbers. 
#include<stdio.h> 
int main(){ 
    int a, b, c, d, e; 
    printf("Enter 5 numbers to get their average : "); 
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e); 
    float average = (float)(a+b+c+d+e)/5; 
    printf("The average is %f\n", average); 
    return 0; 
}