#include<stdio.h>
#include "add.c"
#include "sub.c"
#include "mul.c"
#include "div.c"

int main()
{
	int sum,diff,pro,quo;
	int a,b,w;
	printf("enter the numbers");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("enter 1 for addition, 2 for subraction, 3 for multiplication ,4 for division(quotient)");
	scanf("%d",&w);
	switch(w)
	{
	case 1:
		sum=add(a,b);
	printf("%d\n",sum);
	break;
	case 2:
		diff=sub(a,b);
	printf("%d\n",diff);
	break;
	case 3:
		pro=mul(a,b);
	printf("%d\n",pro);
	break;
	case 4:
		quo=div(a,b);
	printf("%d\n",quo);
	break;
	default:
		printf("please select from the menu");
	
}	 
}

