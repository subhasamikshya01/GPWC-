#include<iostream>
using namespace std;
int main(){
	int *ptr=new int;
	*ptr=42;
	cout<<"value stored in dma "<<*ptr<<endl;
	delete ptr;
	return 0;
}
