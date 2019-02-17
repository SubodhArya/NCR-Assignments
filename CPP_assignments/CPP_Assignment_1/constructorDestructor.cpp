/*Create objects of employee class to show the order of invocation of constructors and
destructors. Display the sizes of each of these classes and explain with comments.
a. Call by value
b. Call by reference*/
#include<iostream>
#include<string>
using namespace std;
class employee{
	char* ename;
	int empid;
	public:
	employee(char* name,int id){
		ename=name;
		empid=id;
	}
	void display(){
		cout<<endl<<"name is "<<ename<<" id is "<<empid<<endl;
	}
	~employee(){
		cout<<"destructed object";
	}
};
	int main(){
	employee e1("subbu",110);
	e1.display();
	//~e1();
}