#include<bits/stdc++.h>
using namespace std;
void ReplaceCharacter (char str[], int n, char ch1, char ch2)
{
   for(int i=0;i<n;i++)
   {
    if(str[i]==ch1)
    {
        str[i]=ch2;
    }
    else if(str[i]==ch2)
    {
        str[i]=ch1;
    }
   }
  cout<<str;
}
int main()
{
    char str[] ="apples";
    int n=strlen(str);
    char ch1='a';
    char ch2='p';
    ReplaceCharacter(str,n,ch1,ch2);
    return 0;
}