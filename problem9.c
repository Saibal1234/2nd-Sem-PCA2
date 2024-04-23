//  WACP to print the sizes and range of various data types.
 
#include<stdio.h> 
#include<limits.h> 
int main(){ 
    int i; 
    char j; 
    float k; 
    double l; 
    long double m; 
     
    printf("Size of integer is %d\n", sizeof(i)); 
    printf("Size of character is %d\n", sizeof(j)); 
    printf("Size of float is %d\n", sizeof(k)); 
    printf("Size of double is %d\n", sizeof(l)); 
    printf("Size of long double is %d\n", sizeof(m)); 
    printf("Range of Integer is %d to %d\n", INT_MIN, INT_MAX); 
    printf("Range of character is %d to %d\n", CHAR_MIN, CHAR_MAX); 
    printf("Range of Unsigned Integer is 0 to %u\n", UINT_MAX); 
    printf("Range of Short Integer is %d to %d\n", SHRT_MIN, SHRT_MAX); 
    printf("Range of Long Integer is %Li to %Li\n", LONG_MIN, LONG_MAX);  
    return 0; 
} 