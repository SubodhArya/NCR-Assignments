#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
void reverse(char* s) {
	printf("entered reverse\n");
	int len;
	len = strlen(s);
	char *p1, *p2 = NULL;
	for (p1 = s, p2 = s + (len - 1);p1 < p2;p1++, p2--) {
		char temp=*p1;
		*p1 = *p2;
		*p2 = temp;
	}
	//printf("%s", s);
//	return s;
}
int compare(char* s1, char* s2) {
	char *p1 = s1, *p2 = s2;
	while (*p1 == *p2) {
		if (p1 == '\0') {
			return 0;
		}
		else if (*p1 > *p2) {
			return 1;
		}
		else {
			return -1;
		}
		p1++;p2++;
	}

}
void concat(char* s1, char* s2) {
	char *p1 = s1, *p2 = s2;
	while (*s1 != '\0') {
		s1++;
	}
	while (*s2 != '\0') {
		*s1 = *s2;
		s2++;
		s1++;
	}
	printf("%s", p1);
//	return p1;
}
void copy(char* s3, char*s1) {
	char *p1=s3, *p2=s1;
	while (*p2 != '\0') {
		*p1 = *p2;
		p1++;p2++;
	} *p1 = '\0';
//	return s3;
}
int main() {
	char str[] = "hello";
	char str2[] = "hi", str3[]="";
	int scann;int a = 0;
	while (1) {
		printf("enter 1.reverse 2.compare 3.concat 4.strcpy others: exit\n");
		scanf("%d", &scann);
		switch (scann) {
		case 1:
		    reverse(str);
			printf("%s", str);
			break;

		case 2:
			a = compare(str, str2);
			if (a == 0) {
				printf("same");
			}
			else if (a > 1) {
				printf("str is greater");
			}
			else {
				printf("str2 is greater");
			}
			break;
		case 3:
			concat(str, str2);printf("%s", str);break;
		case 4:
			copy(str3, str);printf("%s", str3);break;
		default:
			a = 1;goto label;
			break;

		}
	} label:
	return 0;
}