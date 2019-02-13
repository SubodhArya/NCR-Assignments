// 6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
	FILE* fp;
	fopen_s(&fp, "6.txt", "r");
	
	while (!feof(fp))
	{
		char ch[100];
		fgets(ch, 100, fp);
		cout << ch;
	}
	system("pause");
    return 0;
}

