// postfixeval.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
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
	int pop()
	{
		if (isEmpty())
		{
			cout << "Stack is empty";
			return 0;
		}
			return(stacks.p[stacks.top--]);			
		
	}
	int peek()
	{
		return stacks.top;
	}
	void display()
	{
		cout << "the elements of the stack are:";
		for (int i = 0; i < stacks.top; i++)
		{
			cout << stacks.p[i] << "\n";
		}

	}
	int top()
	{
		return stacks.p[stacks.top];
	}
	void posteval(char *ch)
	{
		int pos = 0;
		int num ;
		int x1, x2,x3;
		stackc s;
		s.setSize(10);
		for (int i = 0; i < strlen(ch); i++)
		{
			if (ch[i] == '@')
			{
				num = 0;
				for (int j = pos; j < i; j++)
				{
					num = num * 10 + (int)(ch[j]-48);
				}

				s.push(num);
				cout << s.top() << "\n";
				pos = i+1;

			}
			if (ch[i] == '+' || ch[i] == '-' || ch[i] == '*' || ch[i] == '/')
			{
				x1 = s.pop();
				x2 = s.pop();
				if (ch[i] == '+')
					x3 = x2 + x1;
				else if (ch[i] == '-')
					x3 = x2 - x1;
				else if (ch[i] == '*')
					x3 = x2 * x1;
				else if (ch[i] == '/')
					x3 = x2 / x1;
				s.push(x3);
			}

		}
		cout << s.top() << "\n";
		return;
	}
	
};

int main()
{
	stackc s;
	char ch[10];
	cin >> ch;
	s.posteval(ch);
	system("pause");
    return 0;
}

