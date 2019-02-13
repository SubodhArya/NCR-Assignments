#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void replacetab() {

	char ch;
	printf("opening filename.txt file\n");
	FILE* fp=NULL;
	FILE* fp2=NULL;
	fp = fopen("filename.txt", "r");
	fp2= fopen("newfile.txt","w");
	
	// If file opened successfully, then write the string to file
	if (fp && fp2)
	{   printf("succesfully opened the file\n");
		//Repeat until End Of File character is reached.	
		while ((ch = getc(fp)) != EOF) {
		
			if ((ch =='\t')) {
				//add \t manually
				char c ='\\';
				fputc(c,fp2);
				fputc('t',fp2);
				
			}
			// copy contents from file 1 to file 2
			else{fputc(ch,fp2);}
			
			
        }		
	}
	//if file doesnt open
	else 
	{
		printf("Failed to open the file\n");
	}


}