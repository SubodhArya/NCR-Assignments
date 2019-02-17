#include<iostream>
#include<cstring>
#include<string>
using namespace std;
class Student{
	char* student_name;
	char Grade;
	int marks1,marks2,marks3;
	public:
	void set_data(char* name,int m1,int m2,int m3){
		int len=strlen(name);
		student_name=(char*)malloc((len+1)*sizeof(char));
		marks1=m1;
		marks2=m2;
		marks3=m3;
		strcpy(student_name,name);
		//Grade=grade;
	}
	float calculateAverage(){
		return (float)(marks3+marks2+marks1)/3;
	}
	string computeGrade(){
		float avg=calculateAverage();
		if(avg>60){
			return "First grade";
		}
		else if(50<avg<60){
			return "Second grade";
		}
		else if(40<avg<50){
			return "Third grade";
		}
		else{
			return "Fail";
		}
		
	}
	void display(){
		cout<<"name:"<<student_name<<"average is :"<<calculateAverage()<<"grade is"<<computeGrade()<<"\n";
	     //cout<<student_name;
	}
	
	
};
int main(){
	Student s1,s2,s3;
	s1.set_data("subodh",55,55,55);
	
	return 0;
	
}