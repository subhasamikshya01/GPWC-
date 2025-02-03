#include<iostream>
using namespace std;
class shallow{
	public:
	int *ptr;
	shallow(int val){
		ptr=new int;
		*ptr=val;
	}
	~Demo(){
		delete ptr;
		cout<<"this is destructor"<<endl;	
	}
};
int main(){
	shallow b1(10);
	shallow b2=b1;//default
}
