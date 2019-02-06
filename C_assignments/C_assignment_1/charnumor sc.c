#include <stdio.h>

int main()
{
    char text[80];
	int i=80;
   	for(i=0;i<80;i++)
	{
	printf("enter the charater \n");
    scanf("%c", &text[i]);   
    if((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
    {
        printf("'%c' is alphabet.", text[i]);
		
    }
    else if(text[i] >= '0' && text[i] <= '9')
    {
        printf("'%c' is digit.", text[i]);
		
    }
    else if(text[i]>=32 && text[i] <=47)
    {
        printf("'%c' is special character.", text[i]);
	
    }
	
	}
}

