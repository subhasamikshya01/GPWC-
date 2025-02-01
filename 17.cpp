#include<iostream>
using namespace std;
class box{
	protected:
	double width;
};
class smallbox:box{
	public:
	void setwidth(double width);
	double getwidth();
};
double smallbox::getwidth(){
	return width;
}
void smallbox::setwidth(double wid){
	width=wid;
}
int main(){
	smallbox b;
	b.setwidth(5.0);
	cout<<b.getwidth()<<endl;
	return 0;
}
