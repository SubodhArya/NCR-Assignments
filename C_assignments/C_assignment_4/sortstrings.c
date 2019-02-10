#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main() {
	char** p = NULL; printf("POINTER SORTING OF ANY NO. OFSTRINGS OF VARIABLE LENGTHS\n");
	printf("enter the no of strings req\n");
	int no;
	scanf("%d", &no);
	p = (char**)malloc(no * sizeof(char*));//allocation done for no. of stringfs
	// now allocate space for each string
	char name[50];int len;int i;
	for ( i = 0;i < no;i++) {
		//for each string enter a name and store it dynamically
		printf("enter the name no %d \n", i);
		scanf("%s", name);
		len = strlen(name);
		p[i] = (char*)malloc((len + 1) * sizeof(char));
		if (p[i] == NULL) {
			printf("failed to allocate");
		}
		strcpy(p[i],name);
	
		
	} int j;
	printf("before sort:\n");
	for(i=0;i<no;i++){
		printf("%s\n",(p[i]));
	} 
	
	for( i=0;i<no-1;i++){
		for( j=0;j<no-i-1;j++){
	//	printf("compare %s withh %s",p[j],p[j+1]);
			if(strcmp(p[j],p[j+1])>0){
				char* temp =p[j];
				p[j]=p[j+1];
				p[j+1]= temp;
				
			}
		}
	}
	printf("aftersort\n");
 for(i=0;i<no;i++){
		printf("%s\n",(p[i]));
	} 
	



	return 0;
}

