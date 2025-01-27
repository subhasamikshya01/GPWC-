#include<iostream>
using namespace std;
class box{
	public:
		double l;//length of the box
		double b;//breadth
		double h;//height of the box
};
int main(){
	box b1,b2;//objects for class box
	double v=0.0;
	b1.h=5.0;
	b1.l=12.0;
	b1.b=14.0;
	//box 2 details
	b2.h=10.0;
	b2.l=15.0;
	b2.b=18.0;
	//volume of box 1
	v=b1.h*b1.l*b1.b;
	cout<<"volume of box 1:- "<<v<<endl;
	//volume of box 2
	v=b2.h*b2.l*b2.b;
	cout<<"volume of box 2:- "<<v<<endl;
	return 0;
}
