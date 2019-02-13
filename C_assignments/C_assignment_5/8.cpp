#include "stdafx.h"
#include <iostream> 
using namespace std;

#define MAX(i, j) (((i) > (j)) ? i : j) 
#define concat(a,b) a##b
int main()
{
	int a, b;

	a = 250;
	b = 25;
	int ab = 45;
	cout << "The maximum is " << MAX(a, b) << endl;
	cout << "Concatenaion is" << concat(a, b);
	system("pause");
	return 0;
}