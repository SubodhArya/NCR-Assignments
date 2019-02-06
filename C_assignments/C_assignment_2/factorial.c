#include<stdio.h>

long int fact(int n)
{
	if(n==0)
	 return 1;
	 
	 else
	 	return n*fact(n-1);
}
int main()
{
	int n;
	long int res;
	printf("enter the number\n");
	scanf("%d",&n);
	res=fact(n);
	printf("factorial is %ld",res);
}
	

