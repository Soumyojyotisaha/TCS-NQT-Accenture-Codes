#include<bits/stdc++.h>
using namespace std;
string sorting(string str)
{
    sort(str.begin(),str.end());
    return str;
}
int main() {

  // Input string
  string str = "zxcbg";
  int length = str.length();

  cout << "String after sorting:" << "\n";
  cout << sorting(str) << "\n";
  return 0;
}