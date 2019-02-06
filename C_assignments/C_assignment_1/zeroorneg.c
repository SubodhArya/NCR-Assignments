#include<stdio.h>
#include<math.h>



int main()
{
	
		int i;
		int max=0;
		int min;
		int sum=0;
		int avg;
		int* n;
		int count=1;  
		n=(int*)calloc(count,sizeof(int)); 
		for(i=1;i<=count;i++)
		{
			scanf("%d",&n[i]);
		if(n[i]<=0)
			break;
		else
			count++;		
			
	}
	for(i=1;i<=count-1;i++)
	{
		printf("%d\t",n[i]);
	
		if(n[i]>max)
			max=n[i];
		if(n[i]<min)
			min=n[i];
			
		sum=sum+n[i];
		avg=sum/(count-1);
	
	}
	
	printf("max value is %d\nmin value is %d\navg value is %d\n",max,min,avg);
}
			

