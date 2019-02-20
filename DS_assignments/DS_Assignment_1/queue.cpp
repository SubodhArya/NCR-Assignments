// queue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

struct queues {
	int *p;
	int f;
	int r;
	int size;
}qs;

class queuec {
public:
	void setsize(int n)
	{
		qs.size = n;
		qs.p = (int*)malloc(sizeof(int)*n);
		qs.f = 0;
		qs.r = -1;

	}
	int isfull()
	{
		if (qs.r == qs.size - 1)
			return 1;
		else
			return 0;
	}
	void push(int x)
	{
		if (isfull()) {
			cout << "queue is full\n";
			return;
		}
		else
		qs.p[++(qs.r)] = x;
		return;

	}
	int isempty()
	{
		if (qs.f == 0 && qs.r == -1)
			return 1;
		else
			return 0;
	}
	void pop()
	{
		if (isempty())
			cout << "nothing to pop\n";
		else
			qs.f++;
	}
	void display()
	{
		if (!isempty())
		{
			cout << "The elements are:";
			for (int i = qs.f; i <= qs.r; i++)
			{
				cout << " " << qs.p[i];
			}
		}
	}
};

int main()
{
	queuec q;
	q.setsize(5);
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	q.pop();
	q.display();
	system("pause");
    return 0;
}

