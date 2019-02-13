#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void count() {
	int alphacount=0;
	int digitcount=0;
	int specialcount=0;
	char ch;
	printf("opening filename.txt file\n");
	FILE* fp=NULL;
	fp = fopen("filename.txt", "r");
	// If file opened successfully, then write the string to file
	if (fp)
	{   printf("succesfully opened the file\n");
		//Repeat until End Of File character is reached.	
		while ((ch = getc(fp)) != EOF) {
			// Increment character count for alphabets
		    //	printf("char is %c",ch);
			if ((ch >= 'a' &&ch <= 'z') || (ch >= 'A' &&ch <= 'Z')) {
				alphacount++;
			}
			// Increment character count for DIGITS
			if ((ch >= '0' &&ch <= '9') ) {
				digitcount++;
			}
			// Increment character count for SPECIAL CHARS
			if ((ch >= 32 &&ch <= 47)) {
				specialcount++;
			}
        }		
	}
	//if file doesnt open
	else 
	{
		printf("Failed to open the file\n");
	}

	printf("ALPHABETS : %d \n", alphacount);
	printf("DIGITS : %d \n", digitcount);
	printf("SPECIAL Characters : %d \n", specialcount);
	fclose(fp);
}