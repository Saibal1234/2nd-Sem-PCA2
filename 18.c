// WACP to determine whether the character entered is a capital, small case letter, a digit 
// or a special symbol. (using else if ladder)
#include<stdio.h>
int main()   
{   
    char ch;  
printf("Enter a Character\n");   
scanf("%c", &ch);   
if(ch>= 65 &&ch<= 90)  { 
printf("%c is an Uppercase Alphabet\n", ch);   
    }   
    else if(ch>= 97 &&ch<= 122)  {  
printf("%c is an lowercase Alphabet\n", ch);   
    }   
    else if(ch>= 48 &&ch<= 57)  { 
printf("%c is a Number\n", ch);   
    }   
    else if( (ch>= 0  &&ch<= 47) ||   
             (ch>= 58 &&ch<= 64) ||   
             (ch>= 91 &&ch<= 96) ||   
             (ch>= 123 &&ch<= 127))  { 
printf("%c is a Special Character\n", ch);   
    }   
 
    return 0;   
}