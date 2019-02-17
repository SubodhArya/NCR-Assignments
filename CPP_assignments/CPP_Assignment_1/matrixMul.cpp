/*Write a C++ program to define a matrix and do matrix-vector multiplication using a
friend function */
#include<iostream>
#include<vector>
using namespace std;
class Matrix{
vector<vector<int> > v;
int rows;
int cols;
public:
Matrix(){
	rows=cols=0;
//	v={{}};
}
Matrix(int rows1,int cols1){
     rows=rows1;
     cols=cols1;
	for(int i=0;i<rows;i++){
		vector<int>temp;
		for(int j=0;j<cols;j++){
			
			cout<<"enter the value of "<<i<<"th row"<<j<<"col\n";
			int ele;
			cin>>ele;
			temp.push_back(ele);
		}
		v.push_back(temp);
	}
}
void display(){
	cout<<"\n the display is\n";
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++){
		  cout<<v[i][j]<<" ";
		}
		cout<<"\n";
	}
}
friend Matrix multiply(Matrix m1,Matrix m2);	
};
Matrix multiply(Matrix m1,Matrix m2){
	int i,j,k;
	Matrix m3;
	if(m1.cols!=m2.rows){
		cout<<"MULTIPLICATION NOT POSSIBLE\n";
	}
	else{ int sum=0;
		for(int i=0;i<m1.rows;i++){
			vector<int> temp;
			for(int j=0;j<m2.cols;j++){
			
				
				for(int k=0;k<m2.rows;k++){
					//cout<<m1.v[i][j]<<"*"<<m2.v[j][k]<<"\n";
					sum=sum+m1.v[i][k]*m2.v[k][j];
				}
				//m3.v[i][j]=sum;
			//	cout<<"adding "<<sum<<"\n";
				temp.push_back(sum);
				sum=0;
			}
			m3.v.push_back(temp);
		}
		
	}
	return m3;
}
int main(){
	Matrix m1(1,2),m2(3,1);
	m1.display();
	m2.display();
	Matrix m3=multiply(m1,m2);
	m3.display();
	
}