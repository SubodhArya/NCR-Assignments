#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void rotateword(){
		FILE *fp1=NULL,*fp2=NULL;
		int num =0;
		char word[2000];
		char *string;
		
		fp1 = fopen("filename.txt", "r");	fp2 = fopen("newfile.txt", "w");
		
		if (fp1 == NULL)
		{
		    printf("Error file missing\n");
		    exit(-1);
		}
		
		if (fp2 == NULL)
		{
		    printf("Error file missing\n");
		    exit(-1);
		}
		
		scanf("%s",word);
		
		printf("%s\n", word);
		
		while(!feof(fp1))//this loop searches the for the current word
		{
		    fscanf(fp1,"%s",string);
		    printf("%s is the string",string);
		    if(!strcmp(string,word)){
		    	fprintf(fp2,strrev(word));
			}//if match found increment num
			else{
				fprintf(fp2,(string));
			}
		   
		}
	
}
