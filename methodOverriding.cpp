#include <bits/stdc++.h>
using namespace std;

class Car
{
public:
    void shiftGear()
    {
        //....
    }

    void f2()
    {
        //....
    }
};

class SportsCar : public Car
{
public:
    void shiftGear()
    {
        //....Method overriding
    }

    void f2(int x)
    {
        //...Method hiding
    }
};

int main()
{
    SportsCar obj;
    obj.shiftGear(); // SportsCar

    //  obj.f1();  // Early binding: first see the type: B type , then search f1() in B, if YES then run it, otherwise go for the parent for search for f1().
    // obj.f2(); Error: bcoz name match so it would'nt go in parent, and bcoz parameter defferent so it show error.
    // obj.f2(2);  Correct
    return 0;
}

// In function overloading, all version of the function with different parameters should present in the same class

// when to use mathod overriding ?
// ans: when u want to modified some method of the base class .
// Ex : changeGear() in car and sportscar. sport car change gear in slightly diffrent way, at that time we don't want that car changeGear() run from the sportcar obj.