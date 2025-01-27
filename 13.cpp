//scope resolution operator
#include<iostream>
using namespace std;
int y=10;
int main(){
	int x=20;
	cout<<"locally declared variable: "<<x<<endl;
	cout<<"globally declared variable: "<<y<<endl;//scope operator ::
	return 0;
}
