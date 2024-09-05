#include<bits/stdc++.h>
using namespace std;
int checkpasscode(char str[],int n)
{
   if(n<4)
   return 0;

   if(isdigit(str[0]))
   {
    return 0;
   }
   bool hasdigit=false;
   bool hasupper=false;
   bool special=true;

   for(int i=0;i<n;i++)
   {
    if(str[i]==' '||str[i]=='/')
    {
     return 0;
    }
    if(isdigit(str[i]))
    {
        hasdigit=true;
    }
    else if (isupper(str[i]))
    {
        hasupper=true;
    }
    else if(ispunct(str[i]))
    {
        special=false;
    }
   }
   if(hasupper && hasdigit && special)
   {
    return 1;
   }
   else
   {
    return 0;
   }
}

int main()
{
    char str[]={"a987@abC012"};
    int n=strlen(str);
    cout<<checkpasscode(str,n);
    return 0;

}