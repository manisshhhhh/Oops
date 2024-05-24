#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    virtual void func(); // Pure virtual function/ Do nothing func: there will be no defination of this function.
};

class Student : public Person
{
public:
    void func()
    {
        //....
    }
};

int main()
{
    return 0;
}

// Pure virtual function/ Do nothing function
// The class which contain do nothing function can't be make any object of that class. Bocz we don't want anyone call do nothing function.
// But still one can make child class and then call do nothing function: for prevent that u need to override that do nothiing func in child class.
// Still one can call do nothing func if , they use pointer to call do nothing func: early binding. : soln we chave to make do nothing function vietual.

// IMPORTANT:
// What is abstrct class ?
// Ans: A class containg pure virtual func called an abstrct class. we can not make obj of this class. If u want to use other mathods that is define in abstrct class u have to make child class and inherit that to use those methods.But u need to override that pure virtual func in child class.

// Why is the need of making abstrct class ?
// Answer:
//   Person Class : Name, ph
//             /\
            //            /  \
            //           /    \
            //   Student       Teacher

// Either we want to store data of student or teacher, it does not make any sense that we are making obj of person class.