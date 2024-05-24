#include <bits/stdc++.h>
using namespace std;

class B; // "forward declaration" of B class otherwise compiler does not recognise B at line number 12.
class A
{
private:
    int x;
    friend void func(A, B);

public:
    A(int val)
    {
        x = val;
    }
};

class B
{
private:
    int y;
    friend void func(A, B);

public:
    B(int val)
    {
        y = val;
    }
};

void func(A ob1, B ob2) // define
{
    cout << "sum: " << ob1.x + ob2.y << endl;
    cout << "Friend function" << endl;
}

int main()
{
    A a(2);
    B b(3);
    func(a, b);
    return 0;
}

// 1. it can be a friend of more then 1 class : by passing 2 class in parametr.