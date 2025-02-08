#include<iostream>
using namespace std;
class unspointers{
	public:
		int *ptr,*ptr1;
		unspointers(int i){
			ptr1=new int;
			*ptr1=i;
			ptr=&i;
			cout<<"value stored in ptr:- "<<ptr<<endl;
			cout<<"value stored in *ptr:- "<<*ptr<<endl;
			cout<<"value of &ptr:- "<<&ptr<<endl;
			cout<<"value of &i:- "<<&i<<endl;
			cout<<"value of ptr1:- "<<ptr1<<endl;
			cout<<"value of i:- "<<i<<endl;
			cout<<"value stored in *ptr1:- "<<*ptr1<<endl;
			cout<<"value stored in &ptr1:- "<<&ptr1<<endl;
			cout<<"value stored in *(&ptr1):- "<<*(&ptr1)<<endl;
		}
		/*void print(){
			cout<<"value: "<<*ptr<<endl;
			cout<<"address: "<<ptr<<endl;
			cout<<"address: "<<&ptr<<endl;
			cout<<"value: "<<*(&ptr)<<endl;
			cout<<"value: "<<**(&ptr)<<endl;
		}*/
		~unspointers(){
			delete ptr;
		}
};
int main(){
	unspointers obj(10);
	//obj.print();
	return 0;
}
