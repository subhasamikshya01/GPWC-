#include<iostream>
using namespace std;
struct bankaccount{
	private:
	string accholder;
	float balance;
	public:
	void insertholdername(string name){
		accholder=name;
	}
	void insertamt(float bal){
		balance=bal;
	}
	void deposit(float amt){
		if(amt>0){
			balance+=amt;
			cout<<"deposited balance:- "<<amt<<"\nbalance in acc:- "<<balance<<endl;
		}
		else{
			cout<<"invalid amount"<<endl;
		}
	}
	void withdraw(float amt){
		if(amt>0 && amt<=balance){
			balance-=amt;
			cout<<"withdrawn balance:- "<<amt<<"\nbalance in acc:- "<<balance<<endl;
		}
		else{
			cout<<"invalid amount"<<endl;
		}
	}
	void details(){
		cout<<"account holder name:- "<<accholder<<endl;
		cout<<"current balance:- "<<balance<<endl;
	}
};
int main(){
	bankaccount a1;
	a1.insertholdername("somnath");
	a1.insertamt(700);
	a1.deposit(500);
	a1.withdraw(50);
	a1.details();
}
