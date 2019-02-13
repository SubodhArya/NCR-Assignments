// 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	unsigned int i = 1;
	char *c = (char*)&i;
	if (*c)
		printf("Little endian");
	else
		printf("Big endian");
	getchar();
    return 0;
}

