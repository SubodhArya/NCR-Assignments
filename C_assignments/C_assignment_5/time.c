#include<stdio.h>
#include<stdlib.h>
struct time{
    int hours;
	int min;
	int sec;
}watch;
int main(){
	printf("enter the time of the day/n");
	printf("hours:\n");
	scanf("%d",&watch.hours);
	printf("minutes:\n");
	scanf("%d",&watch.min);
	printf("seconds:\n");
	scanf("%d",&watch.sec);
	printf("The time you entered is\n ");
	printf("%d : %d :%d",watch.hours,watch.min,watch.sec);
	
}