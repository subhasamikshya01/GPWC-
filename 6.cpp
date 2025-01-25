//using namespace create a library section 28 and within that create functions assignment 1 ,2 and create the same for section 29 too

#include<iostream>
using namespace std;
namespace sec28{
	void assignment1(){
		cout<<"sec 28 assignment 1 completed"<<endl;
	}
	void assignment2(){
		cout<<"sec 28 assignment 2 completed"<<endl;
	}
};
namespace sec29{
	void assignment1(){
		cout<<"sec 29 assignment 1 completed"<<endl;
	}
	void assignment2(){
		cout<<"sec 29 assignment 2 completed"<<endl;
	}
};
int main(){
	sec28::assignment1();
	sec28::assignment2();
	sec29::assignment1();
	sec29::assignment2();
}
