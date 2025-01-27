#include<iostream>
using namespace std;

class box {
    //private:
        double l, b, h; // Private member variables

    //public:
        // Declare calculatevol as a friend function
        friend double calculatevol(const box& b);

        // Declare insertdetails as a friend function to set the private members
        friend void insertdetails(box& b, double l, double b1, double h1);
};

// Friend function to set the private members
void insertdetails(box& b, double l1, double b1, double h1) {
    b.l = l1;   // Set the private member l
    b.b = b1;   // Set the private member b
    b.h = h1;   // Set the private member h
}

// Friend function to calculate the volume of the box
double calculatevol(const box& b) {
    return b.l * b.b * b.h; // Return the volume of the box
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

