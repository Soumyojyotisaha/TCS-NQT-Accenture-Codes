#include<bits/stdc++.h>
using namespace std;
char maxoccur(string str)
{
    char ans;
    int count[256]={0};
    int maxfreq=0;
    int n=str.length();

    for(int i=0;i<n;i++)
    {
        count[str[i]]++;
    if(count[str[i]]>maxfreq)
    {
        maxfreq=count[str[i]];
        ans=str[i];
    }
    }
    return ans;
}
int main() {
   string str = "takeuforward";
   cout << "Maximum occurring character is: " << maxoccur(str) << endl;
}