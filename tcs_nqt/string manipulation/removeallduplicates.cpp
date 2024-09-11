#include<bits/stdc++.h>
using namespace std;
string removeDuplicates(const string &str) {
    set<char> seen;
    string result = "";

    // Traverse the string
    for (char ch : str) {
        // If character has not been seen, add it to result
        if (seen.find(ch) == seen.end()) {
            result += ch;
            seen.insert(ch);
        }
    }

    return result;
}
int main()
{
    string str= "cbacdcbc";
    cout<<removeDuplicates(str);
    return 0;
}