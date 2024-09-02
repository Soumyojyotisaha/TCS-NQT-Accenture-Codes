#include<bits/stdc++.h>
using namespace std;
int convertstring(const string&str)
{
    string binarystring;
    for(char ch:str)
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            binarystring+="0";
        }
        else
        {
            binarystring+="1";
        }
    }
    
    return stoi(binarystring,nullptr,2);
}
int main()
{
    string str="soumyo";
    cout<<convertstring(str);
    return 0;
}