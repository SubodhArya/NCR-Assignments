#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class Complex{
	int real,img;
	public:
	Complex(){
		real=img=0;
	}
		Complex(int i){
		real=img=i;
	}
	Complex(int i,int j){
		real=i;
		img=j;
	}
	
	friend Complex addit(Complex &c1,Complex &c2);
	friend Complex multiply(Complex &c1,Complex &c2);
	void display(){
		cout<<"The complex is "<<real<<"+"<<img<<"i\n";
	}
	
};
Complex addit(Complex &c1,Complex &c2){
	Complex temp;
	temp.real=c1.real+c2.real;
	temp.img=c1.img+c2.img;
	return temp;
}
Complex multiply(Complex &c1,Complex &c2){
    Complex temp;
	temp.real=c1.real*c2.real-c1.img*c2.img;
	temp.img=c1.real*c2.img + c2.real*c1.img;
	return temp;
}
int main(){
	Complex c1(1),c2(2,3),c3,c4;
	c3=addit(c1,c2);
    c3.display();
    c4=multiply(c1,c2);
    c4.display();
	return 0;
}