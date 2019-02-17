#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string>
int replace(char s[]) {
	int len = strlen(s);int count=0;int i=0;
	for( i=0;i<len;i++){
	    if(*(s+i)==' '){
	        *(s+i)='-';
	        count++;
	    }
	}
	return count;

}
int main() {
	char k[]= "the cat sat";
	int replaced = replace(k);
	printf("new string is %s \n",k);
    printf("replaced spaces count %d",replaced);

	return 0;
}

