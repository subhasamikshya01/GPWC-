#include<iostream>
using namespace std;
class box{
	private:
		double l,b,h;
	public:
		//setter method
		void insertdetails(double l1,double b1,double h1){
			l=l1;
			b=b1;
			h=h1;
		}
		double calculatevol(){
			return l*b*h;
		}
};
int main(){
	box b1,b2;
	double l,b,h,v;
	cout<<"enter the height,length and breadth of the box 1:- ";
	cin>>h>>l>>b;
	b1.insertdetails(l,b,h);
	v=b1.calculatevol();
	cout<<"volume of box 1 is:- "<<v<<endl;
	cout<<"enter the height,length and breadth of the box 2:- ";
	cin>>h>>l>>b;
	b2.insertdetails(l,b,h);
	v=b2.calculatevol();
	cout<<"volume of box 2 is:- "<<v<<endl;
	return 0;
}
