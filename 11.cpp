#include<iostream>
using namespace std;

class box {
    public:
        double l; // length of the box
        double b; // breadth
        double h; // height of the box
};

int main() {
    box b1, b2; // objects for class box
    double v = 0.0; // volume of the box

    cout << "Enter the height of box 1: ";
    cin >> b1.h;
    cout << "Enter the length of box 1: ";
    cin >> b1.l;
    cout << "Enter the breadth of box 1: ";
    cin >> b1.b;

    // box 2 details
    cout << "Enter the height of box 2: ";
    cin >> b2.h;
    cout << "Enter the length of box 2: ";
    cin >> b2.l;
    cout << "Enter the breadth of box 2: ";
    cin >> b2.b;

    // Volume of box 1
    v = b1.h * b1.l * b1.b;
    cout << "Volume of box 1: " << v << endl;

    // Volume of box 2
    v = b2.h * b2.l * b2.b;
    cout << "Volume of box 2: " << v << endl;

    return 0;
}

