#include<stdio.h>
#include<string.h>
void deleteChar(char* str,char ch){

	int	len = strlen(str);
	   	
  	for(int i = 0; i < len; i++)
	{
		if(str[i] == ch)
		{
			for(int j = i; j < len; j++)
			{
				str[j] = str[j + 1];
			}
			len--;
			i--;	
		} 
	}	
}
int main() {
	char s1[] = "Bro Im SHubodh";
    deleteChar(s1,'H');
	printf("new string is %s",s1);

	return 0;
}