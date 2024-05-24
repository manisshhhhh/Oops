// Constructor and destructor in inheritance
#include <bits/stdc++.h>
using namespace std;

class A
{
private:
    int a;

public:
    // ..........................................
    // 1. A()
    // {
    // }  Default constructor of A.
    // .............................................

    A(int k)
    {
        a = k;
    }
};

class B : public A
{
private:
    int b;

public:
    // .......................................................................
    // 1. This things happens when A does not have any constructor.
    // B() : A()
    // {
    // }  this is how compiler call first B, but instead of running B encoding, it first of all call A const, its encoding after then runs B encoding.
    // .......................................................................

    // B() : A(3)
    // {
    // }

    // ........................................................................

    B(int x, int y) : A(y)
    {
        b = x;
    } // we are sending x to a , and y to be.
};

int main()
{
    // B obj;
    B obj(2, 3);
    return 0;
}
// IMPORTANT.
// in inheritance when we create an obj of derived class then what will happen ?
// order of constrctor execution : from parent to child.
// order of calling of constructor : from child to parent.

// But if we don't make any deafult constructor in parent class, instead make a parameter const, at that time also a try to call A default constructor. Error.
// at that time we need to write B constructor it self.

// DESTRCTOR:
// order of constrctor execution : from child to parent
// order of calling of constructor : from child to parent.
