// 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct complex {
	int real;
	int img;
}c1,c2;

int main()
{
	enum num { add = 1, sub, mul, div };
	c1.real = 5;
	c2.real = 6;
	c1.img = 7;
	c2.img = 14;
	int i;
	cout << "1.add  2.sub  3.mul  4.div \n";
	cin >> i;
	switch (i)
	{
	case add:
		cout << c1.real + c2.real << "+" << c1.img + c2.img << "i";
		break;
	case sub:
		cout << c1.real - c2.real << "+" << c1.img - c2.img << "i";
		break;
	case mul:
		cout << c1.real * c2.real << "+" << c1.img * c2.img << "i";
		break;
	case div:
		cout << c1.real / c2.real << "+" << c1.img / c2.img << "i";
		break;
	default:
		break;
	}
	system("pause");


    return 0;
}

