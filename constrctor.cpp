#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    Complex(int x, int y) // parameterized constructor.
    {
        real = x;
        img = y;
        cout << "Constructor called" << endl;
    }

    Complex(int x) // parameterized constructor.
    {
        real = x;
    }

    Complex()
    {
        // default constructor
    }

    ~Complex()
    {
        // destructor: it is invoked implicitly when contructor is going to destroy.
        // WHY ?  it should be defined to release the resource allocated to an object, otherwise we cant access that resource.
    }
};

int main()
{
    Complex c1(2, 3);
    return 0;
}

// resolve the problesm of intilize an object. called when obj is created.
// bcoz 2 constructor it is called constructor overloading
// if u make some constructor then default con. destroy autometiclly.
// complier by deafault create 2 cons. 1.default  , 2.copy