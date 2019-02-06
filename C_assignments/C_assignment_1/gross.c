#include<stdio.h>

int main()
{
	float sal;
	printf("please enter your salary");
	scanf("%f",&sal);
	if(0<sal<=4000)
	{
		sal=sal+sal*(0.1)+sal*(0.5);
		printf("Your salary including HRA and DA is %f",sal);
	}
	else if(sal>4000 || sal<=8000)
	{
		sal=sal+sal*(0.2)+sal*(0.6);
		printf("Your salary including HRA and DA is %f",sal);
	}
	else if(sal>8000 || sal<=12000)
	{
		sal=sal+sal*(0.25)+sal*(0.7);
		printf("Your salary including HRA and DA is %f",sal);
	}
	else if(sal>12000)
	{
		sal=sal+sal*(0.3)+sal*(0.8);
		printf("Your salary including HRA and DA is %f",sal);
	}
}
	

