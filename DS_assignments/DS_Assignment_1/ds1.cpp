// ds1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<iostream>
using namespace std;

struct stackss {
	int *p;
	int size;
	int top;

}stacks;
class stackc
{ 

public:
	void setSize(int n)
	{
		stacks.top = -1;
		stacks.size = n;
		stacks.p = new int[n];
	}
	int isFull()
	{
		if (stacks.top == stacks.size)
			return 1;
		else
			return 0;
	}
	int isEmpty()
	{
		if (stacks.top == -1)
			return 1;
		else
			return 0;
	}

	void push(int x)
	{
		if (!isFull())
			stacks.p[++(stacks.top)] = x;
		else
			cout << "Stack is already full,cannot push x=" << x;
		return;

	}
	void pop()
	{
		if (!isEmpty())
			stacks.top--;
		else
			cout << "Stack is empty";
		return;
	}
	int peek()
	{
		return stacks.top;
	}
	void display()
	{
		cout << "the elements of the stack are:";
			for(int i = 0; i < stacks.top; i++)
			{
				cout << stacks.p[i]<<"\n";
			}

	}
	

};
int main()
{
	stackc x;
	x.setSize(5);
	x.pop();
	x.push(1);
	x.push(2);
	x.push(3);
	x.push(4);
	x.push(5);
	x.push(6);
	x.pop();
	x.display();
	system("pause");
    return 0;
}

