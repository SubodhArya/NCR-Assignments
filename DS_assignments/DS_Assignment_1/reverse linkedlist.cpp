

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
		node *temp2;
		temp2 = start;
		temp->data = x;
		temp->next = NULL;
		if (start == NULL)
		{
			start = temp;
		}
		else
		{
			while (temp2->next != NULL)
				temp2 = temp2->next;
			temp2->next = temp;

		}
	}
	void reverse()
	{
		node *curr, *prev, *nex;
		curr = start;
		prev = nex = NULL;
		while (curr!=NULL)
		{
			nex = curr->next;
			curr->next = prev;
			prev = curr;
			curr = nex;
		}
		start = prev;
		return;
	}
	void display()
	{
		node *temp;
		temp = start;
		if (temp == NULL)
		{
			cout << "Empty";
			return;
		}
		else
		{
			while (temp != NULL)
			{
				cout << temp->data << " , ";
				temp = temp->next;
			}
			cout << "\n";
		}

	}

};
int main()
{
	link l;
	l.insert(1);
	l.insert(2);
	l.insert(3);
	l.display();
	l.reverse();
	l.display();
	system("pause");
	return 0;
}

