/* Define a complex class, define default constructor, parameterized constructors, copy
constructor, destructor. Overload +, -, unary -, ++ (prefix, postfix), =, comma (,), ->,
<< and >> operators. */
#include<iostream>
using namespace std;
class Complex{
	int real;
	int img;
	public:
	Complex(){
		real=img=0;
	}
	Complex(int r,int i){
		real=r;
		img=i;
	}
	Complex(const Complex &c1){
		real=c1.real;
		img=c1.img;
		
	}
	Complex operator+(Complex &c2);
	friend Complex operator++(Complex &c1);
	friend Complex operator++(Complex &c1,int x);
	
	friend Complex operator-(Complex &c1,Complex &c2);
	friend Complex operator-(Complex &c1);
	friend Complex &operator,(Complex &c1,Complex &c2);
    Complex operator=(Complex c1){     //c1=c2=c3 c1.=(c2.=(c3))
	//	Complex temp;
	cout<<"came here";
		real=c1.real;
		img=c1.img;
		return *this;
	}
   	~Complex(){
		cout<<endl<<"destroyed complex object"<<endl;
	}
	void display(){
		
		cout<<endl<<"the number is  "<<real<<" + (i)"<<img<<endl;
	}
};
 Complex Complex:: operator+(Complex &c2){ //member func
		Complex *temp=new Complex;
		temp->real=real+c2.real;
	    temp->img=img+c2.img;
		return *temp;
	}
Complex operator-(Complex &c1,Complex &c2){
		Complex *temp=new Complex;
		temp->real=c1.real-c2.real;
		temp->img=c1.img-c2.img;
		return *temp;
	}
Complex operator-(Complex &c1){
		Complex temp;
		c1.real=-c1.real;
		c1.img=-c1.img;
		return c1;
	}
Complex operator++(Complex &c1){
		++c1.real;
		++c1.img;
		return c1;
		
	}
Complex operator++(Complex &c1,int x){
		Complex* temp=new Complex;
		*temp=c1;
		c1.real++;
		c1.img++;
		return *temp;
		
	}
Complex &operator,(Complex &c1,Complex &c2){
	return c2;
}


int main(){
	Complex c3(1,1);
	Complex c1(2,3),c2(3,4),c4,c5;
	c3.display();
   // c3=	c1-c2-c3;
    c3=c1+c2;
	c3.display();
	c3=c1-c2;
	c3.display();
	cout<<endl<<"c4 is(same as c3)"<<endl;
	c4=++c3;
	c4.display();cout<<endl<<"c3 is"<<endl;
	c3.display();
	c4=c3++;
		cout<<endl<<"c4 is"<<endl;c4.display();
			cout<<endl<<"c3 is"<<endl;
	c3.display();
	c5=(c1,c2);
	cout<<endl<<"c5 is now"<<endl;
	c5.display();
	
}