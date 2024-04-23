// A permutation is an ordered arrangement of objects. For example, 3124 
// is one possible permutation of the digits 1, 2, 3 and 4. If all of the permutations are 
// listed numerically or alphabetically, we call it lexicographic order. The lexicographic 
// permutations of 0, 1 and 2 are: 012 021 102 120 201 210 What is the millionth 
// lexicographic permutation of the digits 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9?
#include<stdio.h> 
int fact(int n){ 
 int f=1; 
 while(n){ 
  f*=n--; 
 } 
 return f; 
} 
int main(){ 
 
 int a[10]={0,1,2,3,4,5,6,7,8,9}; 
 int rem,n=999999,m=9,i=0,k,ans[10]; 
 while(m!=0){ 
  int d=n/fact(m); 
  ans[i]=a[d]; 
  
  rem=n%fact(m); 
  n=rem; 
   for(k=d;k<m;k++){ 
   a[k]=a[k+1]; 
  } 
  i++; 
  m--; 
 } 
 for(i=0;i<=9;i++){ 
   printf("%d",ans[i]); 
 }
 return 0;
}