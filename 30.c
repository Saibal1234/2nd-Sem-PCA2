// WACP to generate the following patterns:
//  * 
// *  * 
// *  *  * 
// *  *  *  * 
// *  *  *  *  *
 
#include<stdio.h> 
int main() 
{ 
    int n, i, j; 
    printf("Enter a number: \n"); 
    scanf("%d", &n); 
    for(i=0; i<=n; i++){ 
        for(j=1;j<=i; j++){ 
            printf("* "); 
 
        } 
        printf("\n"); 
    } return 0;
}