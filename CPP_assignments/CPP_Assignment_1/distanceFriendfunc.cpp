/* Create two classes Distance1 & Distance2 that store the value of distances.
Distance1 stores distance in meters and centimeters and Distance2 stores the
distance in feet and inches. Write a program that can read values for the class
objects and add one object of Distance1 with another object of Distance2. Use a

friend function to carry out the addition operation. The object that stores the results
may be a Distance1 or Distance2 object, depending on the unit in which the result is
required. */
#include<iostream>
using namespace std;
class Distance2;
class Distance1{
  int metres;
  int centimetres;
  public:
  Distance1(int m,int cm){
  	metres=m;
  	centimetres=cm;
  }
  friend void add(Distance1 d1,Distance2 d2);
};
class Distance2{
	int feet;
	int inches;
	public:
	Distance2(int ft,int in){
		feet=ft;
		inches=in;
	}
	friend void add(Distance1 d1,Distance2 d2);
};
void add(Distance1 d1,Distance2 d2){
	int input;
	printf("1.metres/centimetres\n2.feet\inches\n");
	scanf("%d",&input);
	if(input==1){
		int metres=d1.metres+0.3*d2.feet;
		int centimetres=d1.centimetres+2.54*d2.inches;
		cout<<"The result is "<<metres<< "metres "<<centimetres<<"centimetres\n";
	}else{
	    int feet=3.2*d1.metres+d2.feet;
		int inches=d2.inches+0.393*d1.centimetres;
		cout<<"The result is "<<feet<< "feet "<<inches<<"inches\n";
	}
	
};
int main(){
	Distance1 d1(3,2);
	Distance2 d2(5,6);
	cout<<"the add result is\n";
	add(d1,d2);
}