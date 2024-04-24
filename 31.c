    //                * 
    //             * * 
    //          * * * 
    //      * * * * 
    //  * * * * *
    #include<stdio.h> 
int main() 
{ 
    int n, i, j, k; 
    printf("Enter a number: \n"); 
    scanf("%d", &n); 
    for(i=0; i<=n; i++){ 
        for (k = 0; k <= n-i; k++) 
        { 
            printf("  "); 
        } 
         
        for(j=1;j<=i; j++){ 
            printf("* "); 
 
        } 
        printf("\n"); 
    } return 0;
}