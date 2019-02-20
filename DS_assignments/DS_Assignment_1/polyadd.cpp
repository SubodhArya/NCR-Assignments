// polyadd.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
struct node {
	node *next;
	int data;
	int power;
};
class link {
	node* start;
public:
	link()
	{
		start = NULL;
	}
	void insert(int x,int pow)
	{
		node *temp;
		temp = new node();
		node *temp2;
		temp2 = start;
		temp->data = x;
		temp->power = pow;
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
	node* add(link l)
	{
		node* temp1, *temp2;
		temp1 = start;
		temp2 = l.start;
		node* temp3;
		node* last = NULL;
		node* first;
		first = NULL;
		while (temp1 != NULL && temp2 != NULL)
		{
			temp3 = new node();

			if (last == NULL)
			{
				first = temp3;
				last = temp3;
			}
			else
			{
				//while (last->next != NULL)
					//last = last->next;
				last->next = temp3;
				last = temp3;
			}
			if (temp1->power > temp2->power)
			{
				temp3->data = temp1->data;
				temp3->power = temp1->power;
				temp1 = temp1->next;
				temp3->next = NULL;

			}
			else if (temp1->power < temp2->power)
			{
				temp3->data = temp2->data;
				temp3->power = temp2->power;
				temp2 = temp2->next;
				temp3->next = NULL;

			}
			else if (temp1->power == temp2->power)
			{
				temp3->data = temp1->data + temp2->data;
				temp3->power = temp2->power;
				temp1 = temp1->next;
				temp2 = temp2->next;
			}
		}
		if (temp1 == NULL)
		{
			while (temp2 != NULL)
			{
				temp3 = new node();
				node* first;
				if (last == NULL)
				{
					first = temp3;
					last = temp3;
				}
				else
				{
					last->next = temp3;
					last = temp3;
				}
				temp3->data = temp2->data;
				temp3->power = temp2->power;
				temp2 = temp2->next;

			}
		}
		if (temp2 == NULL)
		{
			while (temp1 != NULL)
			{
				temp3 = new node();
				node* first;
				if (last == NULL)
				{
					first = temp3;
					last = temp3;
				}
				else
				{
					last->next = temp3;
					last = temp3;
				}
				temp3->data = temp1->data;
				temp3->power = temp1->power;
				temp3 = temp3->next;
			}
		}
		return first;
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
				cout << temp->data << " x power "<<temp->power<<" ";
				temp = temp->next;
			}
			cout << "\n";
		}

	}
	

};
void displaylink(node* start)
{
	while (start != NULL)
	{
		cout << start->data << " x power " << start->power << " ";
		start = start->next;
	}
	return;
}
int main()
{
	link l1, l2;
	l1.insert(3, 2);
	l1.insert(4, 1);
	l2.insert(6, 3);
	l2.insert(4, 0);
	node* l3 = l1.add(l2);
	l1.display();
	l2.display();
	displaylink(l3);
	system("pause");
    return 0;
}

