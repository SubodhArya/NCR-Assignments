// 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<iostream>
using namespace std;
struct str {
	int a;
	char ch;
};
union uni {
	int b;
	char bh;
};
int main()
{
	str st;
	uni un;
	cout << sizeof(st);
	cout << sizeof(un);
	system("pause");
    return 0;
}

