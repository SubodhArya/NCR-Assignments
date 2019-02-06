#include<stdio.h>
#define INT_BITS 32

int rightRotate(int n, unsigned int d) 
{ 
  
   return (n >> d)|(n << (INT_BITS - d)); 
} 
  
int main() 
{ 
  int n ; 
  unsigned int d ;
  scanf("%d",&n); 
   scanf("%d",&d); 
  printf("\nRight Rotation of %d by %d is ", n, d); 
  printf("%d", rightRotate(n, d)); 
  getchar(); 
}  

