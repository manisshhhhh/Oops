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

    Complex operator+(Complex c)
    {
        Complex res(0, 0);
        res.real = real + c.real;
        res.img = img + c.img;
        return res;
    }

    void showData()
    {
        cout << real << " + " << img << "i" << endl;
    }
};

int main()
{
    Complex c1(2, 3);
    Complex c2(4, 1);
    Complex c3 = c1 + c2; // c1.operator+(c2)
    c3.showData();
    return 0;
}

// Operator overloading : when an operator is overload for multiple jobs, it is a way to impliment complile time ploymorphism.