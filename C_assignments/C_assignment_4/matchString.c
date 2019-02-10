#include<stdio.h>
#include<string.h>
int matchIndex(char* s1, char* s2) {
	for (int i = 0;i < strlen(s1) + 1;i++) {
		if (strcmp(s1 + i, s2) == 0) {
			printf(" matched string is %s",s1+i);
			return i;
		}
	}
	return -1;
}
int main() {
	char s1[] = "hey im subodh";
	char s2[] = "subodh";
	int index = matchIndex(s1, s2);
	if (index == -1) {
		printf("no match found\n");
	}
	else {
		printf(" found at %d", index);
	}

	return 0;
}