#include<iostream>
using namespace std;
class line{
	public:
		void setlength(double len);
		double getlength();
		line();//constructor declaration
		~line();//destructor declaration
	private:
		double length;
};
//member function definition including constructor
line::line(void){
	cout<<"object is being created"<<endl;
}
line::~line(){
	cout<<"object is being deleted"<<endl;
}
void line::setlength(double len){
	length=len;
}
double line::getlength(){
	return length;
}
int main(){
	line l;
	l.setlength(8.0);
	cout<<"length of line: "<<l.getlength()<<endl;
}
