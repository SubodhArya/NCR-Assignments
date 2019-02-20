/* 1. Define polar class where each object represents a point in polar coordinates (angle
and radius). Include static data member which keeps tracking the number of active
objects of the class.*/
#include<iostream>
using namespace std;
class polar{
	int x;
	int y;
    static int count;
	public:
	polar(){
		x=y=0;
		count++;
	}
	polar(int a,int b){
		x=a;
		y=b;
		count++;
	}
    static int getObjCount(){
		return  count;
	}  
	
};
int polar::count;

int main(){
	polar p1,p2;
	cout<<polar::getObjCount()<<endl;
	polar p3;
	cout<<polar::getObjCount()<<endl;
    cout<<polar::getObjCount()<<endl;	
	
}
