#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int real, img;

    friend void func(Complex); // Declaration: can be declare publicly or private does'nt matter.
public:
    Complex(int x, int y) // parameterized constructor.
    {
        real = x;
        img = y;
        cout << "Constructor called" << endl;
    }
};

void func(Complex c) // define
{
    cout << c.real << " +" << c.img << "i" << endl;
    cout << "Friend function" << endl;
}

int main()
{
    Complex c1(2, 3);
    func(c1);
    return 0;
}

// 1. Not a member function of the class, to which it is a frined.
// 2. Declared in the class with friend keyword.
// 3. it must be define outside the class to which it is a friend .
// 4. can access any member of the class . but not directly.
// 5. it can be a friend of more then 1 class : by passing 2 class in parametr