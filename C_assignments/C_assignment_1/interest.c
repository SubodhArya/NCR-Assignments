#include<stdio.h>
#include<math.h>
int main()
{
	
	float r,in,cin,cins,cinq,cinm,cind;
	printf("enter the rate of interest\n");
	scanf("%f",&r);
	
	in = (500000*10*r)/100;
	
	printf("Simple interest is %lf\n",in);
	
	cin = 500000 * (pow((1 + r/100), 10));
	
		printf("Coumpound interest annually is %lf\n",cin);
	cins = 500000 * (pow((1 + r/200), 10));
	
		printf("Coumpound interest semi-annually is %lf\n",cins);
	cinq = 500000 * (pow((1 + r/400), 10));
	
		printf("Coumpound interest quaterly is %lf\n",cinq);
	cinm = 500000 * (pow((1 + r/1200), 10));
	
		printf("Coumpound interest monthly is %lf\n",cinm);
	cind = 500000 * (pow((1 + r/36500), 10));
	
		printf("Coumpound interest daily is %lf\n",cind);
	
	
}

