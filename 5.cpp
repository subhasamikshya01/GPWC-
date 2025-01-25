#include<iostream>
using namespace std;//namespace helps to avoid naming conflict, used to organize the large code witten in c++
//1st created library using namespace
namespace l1{
	void print(){
		cout<<"hello"<<endl;
	}
};
//2nd library created using namespace
namespace l2{
	void print(){
		cout<<"world"<<endl;
	}
};
int main(){
	l1::print();
	l2::print();
}
