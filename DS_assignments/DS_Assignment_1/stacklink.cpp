// stacklink.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
struct node {
	node *next;
	int data;
};
class link {
	node* start;
public:
	link()
	{
		start = NULL;
	}
	 void insert(int x)
	{
		node *temp;
		temp = new node();
		temp->data = x;
		temp->next = NULL;
		if (start == NULL)
		{
			start = temp;
		}
		else
		{
			
			temp->next = start;
			start = temp;

		}
		return;
	}
	 void deletefirst()
	 {
		 node* temp;
		 temp = start;
		 if (start == NULL)
		 {
			 cout << "Empty";
			 return;
		 }
		 else if (start->next == NULL)
		 {
			 delete temp;
			 start = NULL;

		 }
		 else
		 {
			 start=start->next;
			 delete temp;
		 }
		 return;

	 }
	 int first()
	 {
		 return start->data;
	 }
};
class stack :public link {
public:
	void push(int x)
	{
		insert(x);
	}
	void pop()
	{
		deletefirst();
	}
	int top()
	{
		return first();
	}
};
int main()
{
	stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.pop();
	cout << s.top();
	system("pause");

    return 0;
}

