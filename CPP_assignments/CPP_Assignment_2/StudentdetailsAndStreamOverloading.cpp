/* Define STUDENT class with data members rollno, name, marks of subjects, total
marks, and grade. Overload >> for reading the STUDENT details, Overload << for
displaying the STUDENT details, include a friend function generate_results
(STUDENT [], int n); which takes an array of STUDENT objects corresponding to n
students and generates total marks and grade for each of the student. Please display
the results of all students using overloaded << operator. */
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class Student{
	int rollno;
	char* name;
	int m1,m2,m3,total;
	char grade;
	public:
	Student(){
		rollno=0;
		name="arya";
		m1=0;
		m2=0;
		m3=0;
		total=0;
		grade='A';
	}
	void details(){
		cout<<rollno<<"is roll no"<<name<<"is name"<<endl;
	}
	friend istream& operator>>(istream& cin,Student &s);
	 friend void calculateGrade(Student s[],int n);
 		friend ostream& operator<<(ostream& cout,Student s);
};
     void calculateGrade(Student s[],int n){
	 	for(int i=0;i<n;i++){
	 	//	cout<<"m1 is "<<s[i].m1;
 		s[i].total=s[i].m1+s[i].m2+s[i].m3;
 		if(s[i].total/3>60){
		 	s[i].grade='A';
		 }
		 else if(s[i].total/3>50 &&s[i].total/3<60){
 			s[i].grade='B';
 		}
 		else{
		 	s[i].grade='F';
		 }
	 	}
 	}
	 istream& operator>>(istream& cin,Student &s){
		cout<<"enter rollno"<<endl;
		cin>>s.rollno;
		cout<<"enter name\n";
		char name[20];
		cin>>name;
		int len=strlen(name);
		s.name=new char[len+1];
		//cin>>s.name;
		strcpy(s.name,name);
		cout<<"enter three marks by spaces"<<endl;
		cin>>s.m1>>s.m2>>s.m3;
	}
	 ostream& operator<<(ostream& cout,Student s){
		cout<<endl<<s.name<<" is name"<<endl<<"marks are"<<s.m1<<" "<<s.m2<<" "<<s.m3<<endl<<"total is"<<s.total<<endl<<"OVERALL GRADE"<<s.grade<<endl;
	}
int main(){
	int num;
	cout<<"enter number of students";
	cin>>num;
	Student* st;
	st=new Student[num];
	for(int i=0;i<num;i++){
		cin>>st[i];
	}
	calculateGrade(st,num);
	for(int i=0;i<num;i++){
		cout<<st[i];
	}
	//Student m;
	//cin>>m;
	//m.details();
	cout<<endl;
	//cout<<m;
	
	
	}