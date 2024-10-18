#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    virtual void show()
    {
        cout<<"Base class";
    }
};
class Derived:public Base{
    public:
    void show()
    {
        cout<<"Derived";
    }

};

int main()
{
    Base*b;
    Derived d;
    b=&d;
    b->show();
    return 0;
}