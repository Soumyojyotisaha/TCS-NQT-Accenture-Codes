#include<bits/stdc++.h>
using namespace std;
string decitoNBase (int n, int num)
{
  string res = "";
  int quotient = num / n;
  vector < int >rem;
  rem.push_back (num % n);
  while (quotient != 0)
    {
      rem.push_back (quotient % n);
      quotient = quotient / n;
    }
  for (int i = 0; i < rem.size (); i++)
    {
      if (rem[i] > 9)
	{
	  res = (char) (rem[i] - 9 + 64) + res;
	}
      else
	res = to_string (rem[i]) + res;
    }
  return res;
}
int main ()
{
  int n, num;
  cin >> n >> num;
  cout << decitoNBase (n, num);
  return 0;
}