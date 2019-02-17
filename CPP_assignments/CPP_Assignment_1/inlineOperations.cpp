#include<iostream>
using namespace std;
class Operations{
	int operand;

	public:
	Operations(){
		operand=0;
	}
	Operations(int i){
		operand=i;
		
	}
	Operations add(Operations o2);
	Operations mul(Operations o2);
	Operations sub(Operations o2);
	Operations div(Operations o2);
	void display(){
		cout<<"The value is "<<operand<<"\n";
	}
	
};

inline 	Operations Operations::add(Operations o2){
		Operations temp;
		temp.operand=operand+o2.operand;
		return temp;
	}
	inline 	Operations Operations::sub(Operations o2){
		Operations temp;
		temp.operand=operand-o2.operand;
		return temp;
	}
	inline 	Operations Operations::mul(Operations o2){
		Operations temp;
		temp.operand=operand*o2.operand;
		return temp;
	}
	inline 	Operations Operations::div(Operations o2){
		Operations temp;
		temp.operand=operand/o2.operand;
		return temp;
	}
int main(){
	Operations o1(2),o2(3),o3;
	o1.display();
	o2.display();
	o3=o1.add(o2);
	o3.display();
	o3=o1.sub(o2);
	o3.display();
	o3=o1.mul(o2);
	o3.display();
	o3=o1.div(o2);
	o3.display();
	
	
	
}