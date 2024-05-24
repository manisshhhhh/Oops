#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    // void f1()
    // {
    //     cout << "A f1" << endl;
    //     //....
    // }

    virtual void f1()
    {
        cout << "A f1" << endl;
        //....Virtual function: late binding
    }
};

class B : public A
{
public:
    void f1()
    {
        cout << "B f1" << endl;
        //...function overriding
    }
};

int main()
{
    A *p, o1;
    B o2;
    p = &o2;
    p->f1();
    // o2.f1();  B  Early binding
    // p->f1();  A  Early binding, pointer type = A, that is why it execute A. even if the address of B is stored.

    // IMPORTANT: But this is the problem in overriding : Soln , prevent it from early binding. Late binding should happen, it should be decided in runtime that whoose address is stored in the given pointer.
    // for that u just need to put virtual keyword before f1() in parent class, now the basis will be adress not type.
    return 0;
}

// Pointer of parent class can point to, obj of derived class.