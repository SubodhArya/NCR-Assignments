#include<stdio.h>

int main()
{
	int n,sum=0,p,temp;

	printf("enter a number");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		p=n%10;
		sum=sum+p;
		n=n/10;
	}
	printf("%d is the sum of digits of %d",sum,temp);
}
	

