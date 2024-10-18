#include<bits/stdc++.h>
using namespace std;

class A
{
    int a=2;
    int b=4;
    public:
    friend int mul(A k)
    {
        return (k.a*k.b);
    }
};
int main()
{
    A obj;
    int res=mul(obj);
    cout<< res;
    return 0;
}