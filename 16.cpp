#include<iostream>
using namespace std;

class bankaccount {
    private:
        String n;
        double b;
    public:
        friend void deposit(bankaccount& ba,double amt);
        friend void withdraw(bankaccount& ba,double amt);
        friend void showdetails(bankaccount& ba, String n1,double b1);
};
void deposit(bankaccount& ba,double amt){
		if(amt>0){
			balance+=amt;
			cout<<"deposited balance:- "<<amt<<"\nbalance in acc:- "<<balance<<endl;
		}
		else{
			cout<<"invalid amount"<<endl;
		}
	}
void withdraw(bankaccount& ba,float amt){
		if(amt>0 && amt<=balance){
			balance-=amt;
			cout<<"withdrawn balance:- "<<amt<<"\nbalance in acc:- "<<balance<<endl;
		}
		else{
			cout<<"invalid amount"<<endl;
		}
	}
void showdetails(bankaccount& ba, String n1,double b1){
	
}
int main() {
    box b1, b2; // Create two box objects
    double l, b, h, v; // Variables to store length, breadth, height, and volume

    // Input details for box 1
    cout << "Enter the height, length, and breadth of box 1: ";
    cin >> h >> l >> b;
    insertdetails(b1, l, b, h); // Use friend function to set box 1's details
    v = calculatevol(b1); // Use friend function to calculate box 1's volume
    cout << "Volume of box 1 is: " << v << endl;

    // Input details for box 2
    cout << "Enter the height, length, and breadth of box 2: ";
    cin >> h >> l >> b;
    insertdetails(b2, l, b, h); // Use friend function to set box 2's details
    v = calculatevol(b2); // Use friend function to calculate box 2's volume
    cout << "Volume of box 2 is: " << v << endl;

    return 0;
}

