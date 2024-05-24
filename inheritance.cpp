#include <bits/stdc++.h>
using namespace std;

class A
{
private:
    int a;

protected:
    void setValue(int val)
    {
        a = val;
    }
};

class B : public A
{
public:
    void setData(int val)
    {
        setValue(3);
    }
};

int main()
{
    B obj;
    // obj.setValue(3);  can't access bcoz setValue is protected for class B, u can only use setValue either in class A or its derived class.
    obj.setData(3);
    return 0;
}