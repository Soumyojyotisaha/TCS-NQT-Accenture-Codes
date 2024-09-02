#include<bits/stdc++.h>
using namespace std;
int  operations(char *str)
{
 int n=strlen(str);
 if(n==0 || n==1 || n==2)
 {
    return -1;
 }
 int result=str[0]-'0';
 for(int i=1;str[i]!='\0';i=i+2)
 {
    int next=str[i+1]-'0';
    int opr=str[i];

    if(opr=='A')
    {
     result=result & next;
    }
    if(opr=='B')
    {
     result=result | next;
    }
    if(opr=='C')
    {
     result=result ^ next;
    }
 }
 return result;
}
int main()
{
char str[] = "1A1";
cout<<operations(str)<<endl;
return 0;
}

