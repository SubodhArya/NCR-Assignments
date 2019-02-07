#include <stdio.h>
#include<string.h>
#include<ctype.h>


int main(void) {
	// your code goes here
//char *ptr[]={"We will teach you how to","Move a mountain","Level a building","Erase the past","Make a million"};
char s[50];
gets(s);
int len = strlen(s);
char* ptr=(char*)malloc(sizeof(char)*(len+1));
strcpy(ptr,s);
//int size = sizeof(ptr)/sizeof(ptr[0]);int count=0;
for(int i=0;i<len+1;i++){
   if(islower(ptr[i])){
       ptr[i]=ptr[i]-32;
   }
}
printf("%s",ptr);
}

