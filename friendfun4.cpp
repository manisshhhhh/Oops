#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void foo()
    {
        //....
    }
};

class B
{
    friend void A::foo();

    // if u want that whole member of class A should be friend of class B.
    friend class A;
};

int main()
{

    return 0;
}

// 1. member function of one class can become the friend of another class. U have to use scope resolution operator.