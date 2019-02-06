#include<stdio.h>
#include<math.h>
void main()
{
	int hex,r=0,bin[64],j,i=0,val=0,b;
	printf("Enter hexadecimal value:");
	scanf("%x",&hex);
	int x=hex;
	printf("Decimal value is %d\n",x);
	int dec=x;
//	printf("\n%d", dec);
	while(x!=0)
	{
		r=x%2;
		bin[i]=!r ;
		
		x=x/2;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		
		printf("%d",bin[j]);
	} 
 for(j=0;j<=i;j++)
 {
 	val=val+ bin[j]* pow(2,j);
 }

 printf("\n(i)One's complement of hex value is:%X",val);
  int res= hex & 0x0F;
  printf("\n(ii)After masking :%X",res);
   printf("\nEnter no of bits to be shifted:");
   scanf("%d",&b);
 int res1= dec << b;
 printf("(iii)Equivalent hex value of %d is %X",res1,res1);
}
