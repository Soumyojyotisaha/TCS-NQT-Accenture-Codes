#include<bits/stdc++.h>
using namespace std;

void findrepeat(vector<int>& arr)
{
    map<int, int> mp;  // Using map to maintain ascending order of keys
    for(auto i : arr)
    {
        mp[i]++;
    }
    
    cout << "The repeating elements in descending order are :" << endl;
    for(auto it = mp.rbegin(); it != mp.rend(); ++it)  // Reverse iteration over map
    {
        if(it->second == 1)  // Print only elements with frequency greater than 1
        {
            cout << it->first << " " << "frequency is: " << it->second << endl;
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, -1, 1, 3, 1};
    findrepeat(arr);
    return 0;
}
