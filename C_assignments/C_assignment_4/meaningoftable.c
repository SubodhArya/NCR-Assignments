#include<stdio.h>

int main()
{
	float table[2][3] = { { 1.1,1.2,1.3 },{ 2.1,2.2,2.3 } };
	printf("The table the float array with 2 rows and 3 columns and holds the base address %d\n",table);
	printf("(table+1) is the memory location of 1st row %d\n", (table + 1));
	printf("*(table+1) is the memory location of 1st column %d\n", *(table + 1));
	printf("(*(table)+1) is the memory location of 2nd row %d\n", (*(table)+1));
	printf("*(*(table+1) +1) is the 1st element of 2nd row %f\n", *(*(table+1) +1));
		printf("*(*(table+1) is the 1st element of 1st row %f\n", *(*(table+1)));
		printf("*(*(table) + 1)+1 is the 2nd element of 2nd row %f\n", (*(*(table) + 1)+1));	    
