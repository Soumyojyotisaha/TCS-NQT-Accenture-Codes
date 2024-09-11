#include<bits/stdc++.h>

using namespace std;
string solve(string str, int length) {
  for (int i = 0; i < length; i++) {
    int ascii = (int)(str[i]);
    if (ascii == 90)
      str[i] = char(65);

    else if (ascii == 122)
      str[i] = char(97);

    else if ((ascii >= 65 && ascii < 90) || (ascii >= 97 && ascii < 122))
      str[i] = char(ascii + 1);
  }
  return str;
}

int main() {

  string str = "abcdxyz";
  int length = str.length();
  cout<<"Original String: "<<"\n";
  cout<<str<<endl;
  cout << "New string: " << "\n";
  cout << solve(str, length) << "\n";

  return 0;
}