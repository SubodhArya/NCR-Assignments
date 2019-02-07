#include <stdio.h>

int main(void) {
	// your code goes here
char* s[]={"We will teach you how to","Move a mountain","Level a building","Erase the past","Make a million"};
int size = sizeof(s)/sizeof(s[0]);int count=0;
for(int i=0;i<size;i++){
    for(int j=0;*(*(s+i)+j)!='\0';j++){
        char c =*(*(s+i)+j);
        if(c=='e'||c=='E'){
                    count++;
        }
    }
}
 printf("%d is the count",count);
	return 0;
}
