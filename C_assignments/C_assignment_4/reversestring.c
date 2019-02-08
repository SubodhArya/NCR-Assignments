#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
void reversestring(char ar[], int len, int arsize) {
	if (len < arsize / 2) {
		return;
	}
	//int size=strlen(ar);
	
	char temp = ar[len];
	ar[len] = ar[arsize - len-1];
	ar[arsize - len-1] = temp;
	reversestring(ar, len - 1, arsize);
	//printf("")

}
int main(void) {
	// your code goes here
	char name[8] = { 'h','a','n','i','s','h','a','\0' };

	reversestring(name, 8 - 2, 7);
	printf("%s", name);
	getchar();


	return 0;
}

