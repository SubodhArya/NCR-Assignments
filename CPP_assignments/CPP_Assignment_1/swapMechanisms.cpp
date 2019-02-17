/* Write a C++ program to swap two number by both call by value and call by
reference mechanism, using two functions swap_value() and swap_reference
respectively, by getting the choice from the user and executing the user’s choice by
switch-case */
#include<iostream>
#include<string>
using namespace std;
class numbers{
	int num;
	public:
	numbers(){
		num=0;
	}
	numbers(int n){
		num=n;
	}
	void display(){
		cout<<"\nnumber is"<<num<<endl;
	}
	friend void swap_value(numbers n1,numbers n2);
	friend void swap_ref(numbers &n1,numbers &n2);
};
void swap_value(numbers n1,numbers n2){
	numbers temp;
	temp=n1;
	n1=n2;
	n2=temp;
}
void swap_ref(numbers &n1,numbers &n2){
	numbers temp;
	temp=n1;
	n1=n2;
	n2=temp;
}

int main(){
	int input;
	numbers num1(10),num2(20);
	num1.display();num2.display();
	cout<<"enter choice"<<endl;
	cin>>input;
	switch(input){
		case 1:
		  swap_value(num1,num2);
		  break;
        case 2:
           swap_ref(num1,num2);
	}
	num1.display();num2.display();
}