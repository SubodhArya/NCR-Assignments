#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char a[20];
	int i,j;
	printf("enter a word\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
	
		for(j=i;a[j]!='\0';j++)
			printf("%c",a[j]);
		for(j=0;j<i;j++)
			printf("%c",a[j]);
		printf("\n");
	
	}
	getch();
	return 0;
	
	
}