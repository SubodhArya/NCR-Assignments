#include<stdio.h>
#include<string.h>
bool isPresentInS2(char c , char* str2){
	for(int i=0;i<strlen(str2);i++){
		if(*(str2+i)==c){
			return true;
		}
	}
 return false;
}
void delete2(char* str,char* str2 ){

	int	len = strlen(str);
	   	
  	for(int i = 0; i < len; i++)
	{
		if(isPresentInS2(str[i],str2))
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
	char s1[] = "Bro Im Subodh";
	char s2[]= " Hello subodh";
    delete2(s1,s2);
	printf("new string is %s",s1);

	return 0;
}