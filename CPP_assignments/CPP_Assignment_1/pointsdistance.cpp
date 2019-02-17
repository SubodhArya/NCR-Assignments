/* Define a point class, where each object represents a point in Cartesian coordinates
(x, y). Define objects of this class and calculate the distance between the 2 points
through a friend function.*/
#include<iostream>
using namespace std;
#include<cmath>

class Point{
	int x;
	int y;
	public:
	Point(){
		x=0;y=0;
	}
	Point(int i,int j){
		x=i;
		y=j;
	}
	friend double distancee(Point p1,Point p2);
};
 double distancee(Point p1,Point p2){
 	int x1=p1.x-p2.x;
 	int y1=p1.y-p2.y;
		double res=pow((double)x1,2)+pow((double)y1,2);
		return sqrt(res);
 }
 int main(){
 	Point p1(3,3),p2(2,4);
 	cout<<"The distance is "<<distancee(p1,p2)<<"\n";
 }