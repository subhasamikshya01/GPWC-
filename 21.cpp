#include<iostream>
using namespace std;
class Line{
	public:
	int getlength();
	Line(int len);
	Line(const Line &obj);
	~Line();
	
	private:
		int *ptr;
};
Line::Line(int len){
	cout<<"Normal constructor allocating ptr: "<<endl;
	ptr=new int;
	*ptr=len;
}
Line::Line(const Line &obj){
	cout<<"copy constructor allocating ptr: "<<endl;
	ptr=new int;
	*ptr=*obj.ptr;//copy value
}
Line::~Line(void){
	cout<<"Free  the memory"<<endl;
	delete ptr;
}
int Line::getlength(void){
	return *ptr;
}
void display(Line obj){
	cout<<"Len of length: "<<obj.getlength()<<endl;
}
int main(){
	Line line(10);
	display(line);
return 0;                                   
}
