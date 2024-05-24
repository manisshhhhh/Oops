#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int x, y;

public:
    Complex(int a, int b)
    {
        x = a;
        y = b;
    }

    friend Complex operator+(Complex, Complex); // decalration

    void showData()
    {
        cout << "sum: " << x << " + " << y << "i" << endl;
    }
};

// defination
Complex operator+(Complex c1, Complex c2)
{
    Complex res(0, 0);
    res.x = c1.x + c2.x;
    res.y = c1.y + c2.y;
    return res;
}

int main()
{
    Complex c1(2, 3);
    Complex c2(3, 4);

    Complex c3 = c1 + c2;
    c3.showData();
    return 0;
}

// 1. Adding 2 complex number using friend function