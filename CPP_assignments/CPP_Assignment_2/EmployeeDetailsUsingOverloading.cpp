/*Define a class named Employee with data members empno, name, & salary and
appropriate member functions for setting and reading the data, constructors and
destructor. Create an array of 5 Employee objects, populate it with data by
overloading >> operator*/
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class Employee{
	int empno;
	string ename;
	int sal;
	public:
	Employee(){
		empno=sal=0;
		ename="emp";
	}
	Employee(int eno,string name,int salary){
		empno=eno;
		ename=name;
		sal=salary;
	}
	void display(){
		cout<<endl<<"employee number is"<<empno<<endl<<"name is "<<ename<<endl<<"sal is "<<sal<<endl;
	}
	friend istream& operator>>(istream& cin,Employee &e);
	friend ostream& operator<<(ostream& cout,Employee e);
	
};
istream& operator>>(istream& cin,Employee &e){
		cout<<"enter empno"<<endl;
		cin>>e.empno;
		cout<<"enter name\n";
		char name[20];
		cin>>name;
		int len=strlen(name);
		e.ename=new char[len+1];
		//cin>>s.name;
		//strcpy(e.ename,name);
		e.ename=name;
		cout<<endl<<"enter the salary"<<endl;
		cin>>e.sal;
	}
ostream& operator<<(ostream& cout,Employee e){
	cout<<endl<<"DSIPLAYING EMPLOYEE DETAILS"<<endl;
	cout<<endl<<e.empno<<" is the employee number"<<endl;
	cout<<endl<<e.ename<<" is the employee name"<<endl;
	cout<<endl<<e.sal<<" is the employee sal"<<endl;
}
int main(){
	Employee emp[5];
	for(int i=0;i<5;i++){
		cin>>emp[i];
	}
	for(int i=0;i<5;i++){
		cout<<emp[i];
	}
}