#include<stdio.h>
int numofones(int n);

int main()
{
	 int n;
	  printf("Enter a decimal number: ");
    scanf("%d", &n);
	printf("no of ones is %d", numofones(n));
}
int numofones(int n)
{
  int count=0;
  while(n!=0){
    if(n&1){
      count++;
    }
    n=n>>1;
  }
    return count;
}
