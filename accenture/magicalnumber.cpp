#include<bits/stdc++.h>
using namespace std;
string modifiedbinary(int num)
{
    string binary="";
    while(num>0)
    {
        int rem=num%2;
        if(rem==0)
        {
            binary='1'+binary;
        }
        else
        {
            binary='2'+binary;
        }
        num=num/2;
    }
    return binary;
}
int sumofdigits(string binary)
{
    int sum=0;
    for(char c:binary)
    {
        sum+=(c-'0');
    }
    return sum;

}
int countodds(int N)
{
    int count=0;
    for(int i=1;i<=N;i++)
    {
        string modified=modifiedbinary(i);
        int sum=sumofdigits(modified);

        if(sum%2!=0)
        {
        count++;
        }
    }
    return count;
}
int main() {
    int N=4;  // Input N
    cout << countodds(N) << endl;  // Output the count of magical numbers
    return 0;
}