#include<iostream>
using namespace std;
class deepcopy{
	public:
		int *ptr;
		//constructor
		deepcopy(int i){
			ptr=new int;
			*ptr=i;
		}
		//deep copy
		deepcopy(const deepcopy &obj){
			ptr=new int;
			*ptr=*obj.ptr;
		}
		~deepcopy(){
			delete ptr;
		}
};
int main(){
	deepcopy obj1(14);
	deepcopy obj2=obj1;
	cout<<"obj1 value "<<*obj1.ptr<<"obj1 address:- "<<obj1.ptr<<endl;
	cout<<"obj2 value "<<*obj2.ptr<<"obj2 address:- "<<obj2.ptr<<endl;
	return 0;
}
