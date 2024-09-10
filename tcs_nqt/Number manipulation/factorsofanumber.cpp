#include <iostream>
using namespace std;
 
void Divisor(int n)
{
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            cout <<" " << i;
}
 
int main()
{   int n = 6;
    cout <<"Factors of "<<n<<" are: ";
    Divisor(n);
    return 0;
}