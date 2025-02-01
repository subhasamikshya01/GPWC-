#include<iostream>
using namespace std;
class Car{
	public:
		string brand_name;
		int launch_year;
	Car(string bn,int ly){
		brand_name=bn;
		launch_year=ly;
	}
	void display(){
		cout<<"brand name:- "<<brand_name<<"\nlaunch year:- "<<launch_year<<endl;
	}
};
int main(){
	Car c1("hyundai",2015);
	c1.display();
	Car c2("tata",2024);
	c2.display();
}
