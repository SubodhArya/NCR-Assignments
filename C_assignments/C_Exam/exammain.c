#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "countthem.c"
#include "removecomments.c"
#include "replace.c"
#include "rotate.c"

int main() {
	printf("The following c program is menu based\n");
	char filename[20];
	printf("OPENING filename.txt file \n");
/*	printf("Enter a filename :");
	gets(filename);
	printf("filename is %s",filename);*/
//	while(1) {
		printf("Enter the following\n 1.Count the alphabets, digits,special chars\n2.Remove comments in the file\n3.Rotate matching word 4.Replace tab with /t \n");
		int input;
		scanf("%d", &input);
		switch (input) {
		case 1:
			//for counting alpha,digits etc
            printf("you have selected count char\n");
			count();
			break;
		case 2:
		  printf("you have selected comment removal\n");
		  removecomment();
		  break;
        case 3:
        //to be added
        rotateword();
        break;
        case 4:
        replacetab();
        break;
		  
       
		}
	//}
}