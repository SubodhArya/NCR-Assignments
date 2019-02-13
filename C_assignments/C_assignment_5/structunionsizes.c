#include<stdio.h>
struct name{
	int rollno;
	char initial;	
};
union name1{
	int rollno;
	char initial;	
};
int main(){
	struct name subodh;
	union name1 subodh1;
	printf("%d is the size of struct  %d is the size of union\n",sizeof(subodh),sizeof(subodh1));
	
}