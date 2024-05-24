#include <bits/stdc++.h>
using namespace std;

// is - a relationship : public inheritance. understood.

// But when to use protected or private in visibility mode ?

class Array
{
private:
    int a[10];

public:
    void insert(int ind, int val)
    {
        a[ind] = val;
    }
};

class Stack : protected Array
{
private:
    int top;

public:
    Stack()
    {
        top = 0;
    }

    void push(int val)
    {
        insert(top, val);
        top++;
    }
};

int main()
{
    Stack s1;
    s1.push(10);
    // s1.insert(3, 10); Bcoz we don't want that s1 can access insert func that is why we use visibilt mode protected.
    return 0;
}