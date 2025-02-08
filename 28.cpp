#include<iostream>
using namespace std;
class unspointers{
	public:
		int *ptr;
		unspointers(int i){
			ptr=new int;
			*ptr=i;
		}
		void print(){
			cout<<"value: "<<*ptr<<endl;
			cout<<"address: "<<ptr<<endl;
			cout<<"address: "<<&ptr<<endl;
			cout<<"value: "<<*(&ptr)<<endl;
			cout<<"value: "<<**(&ptr)<<endl;
		}
		~unspointers(){
			delete ptr;
		}
};
int main(){
	unspointers obj(10);
	obj.print();
	return 0;
}
