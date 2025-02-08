#include<iostream>
using namespace std;

class shallow {
    public:
    int *ptr;
    
    // Constructor
    shallow(int val) {
        ptr = new int;
        *ptr = val;
    }

    // Destructor
    ~shallow() {
        delete ptr;
        cout << "this is destructor" << endl;    
    }

    // Deep Copy Constructor
    /*shallow(const shallow& other) {
        ptr = new int;
        *ptr = *other.ptr;
    }*/
};

int main() {
    shallow obj1(10);
    shallow obj2 = obj1;  // Deep copy constructor is called here

    cout << "object 1 values " << *obj1.ptr << endl;
    cout << "object 2 values " << *obj2.ptr << endl;

    return 0;
}

