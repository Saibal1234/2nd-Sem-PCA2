//  A palindromic number reads the same both ways. The largest palindrome made 
// from the product of two 2-digit numbers is 9009 = 91 × 99. Find the largest palindrome 
//  made from the product of two 3-digit numbers.
#include<stdio.h> 
 
int main(){ 
    int i, j, num, num1, reverse=0, max=0; 
    for(i=999; i>99; i--){ 
        for(j=999; j>99; j--){ 
            num=i*j; 
            num1 = num; 
 
            while(num>0){       
                reverse=reverse*10 + num%10;  
 
                num=num/10; 
            } 
 
            if(reverse==num1 && max < num1){ 
                max = num1; 
            } 
           reverse=0;  
        } 
    } 
    printf("%d", max); 
 
    return 0; 
}