#include<iostream>
using namespace std;
class line{
	public:
		void setlen(double len);
		double getlen();
		line();//constructor
	private:
		double length;
};
//member function definiton including constructors
line::line(void){
	cout<<"object is created"<<endl;
}
void line::setlen(double len){
	length=len;
}
double line::getlen(){
	return length;
}
int main(){
	line l;
	l.setlen(6.0);
	cout<<"length of line: "<<l.getlen()<<endl;
	return 0;
}

