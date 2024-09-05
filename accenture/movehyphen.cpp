#include<bits/stdc++.h>
using namespace std;
string MoveHyphen (string s, int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='-')
        {
            count++;
            s.erase(i,1);
        }
        else
        {
            i++;
        }
    }
    while(count--)
    {
        s='-'+s;
    }
    return s;
}
int main ()
{
  string s="String-Compare";
  int n = s.size ();
  cout << MoveHyphen(s, n);
  return 0;
}