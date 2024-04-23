// WACP to read in the age of a person as an integer number in years 
// and print the three immediate integral range of the age entered. For 
// example if the user enters 25, then the output will print the three 
// immediate integral ranges: 24 to 26, 23 to 27 and 22 to 28.
#include<stdio.h> 
int main(){ 
    int n; 
    printf("Enter your age : "); 
    scanf("%d", &n); 
    printf("Integral ranges are \n %d to %d\n %d to %d\n %d to %d\n", n-1, n+1, n-2, 
n+2, n-3, n+3); 
    return 0; 
}