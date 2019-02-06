#include <stdio.h>

int main()
{
    char text[10];
	int i,alpha=0,num=0,sc=0;
   	for(i=0;i<10;i++)
	{
    scanf("%c", &text[i]); 
	}
	for(i=0;i<10;i++)
	{  
    if((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
    {
        alpha=alpha++;
		
    }
    else if(text[i] >= '0' && text[i] <= '9')
    {
        num=num++;
		
    }
    else if(text[i]>=32 && text[i] <=47)
    {
        sc=sc++;
	
    }
	}
	printf("%d,%d,%d",alpha,num,sc);
	
}

