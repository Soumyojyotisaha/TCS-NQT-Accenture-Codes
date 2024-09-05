#include<bits/stdc++.h>
using namespace std;
int count (int n)
{
  int c = 0;
  if(n%2!=0)
  {
    return 0;
  }
  while (n % 2 == 0 && n != 0)
    {
      c++;
      n = n / 2;
    }
  return c;
}
int maxExponents (int a, int b)
{
  int max = 0, num = 0, ans;
  for (int i = a; i <= b; i++) 
  { 
    int temp = count (i); 
    if (temp > max)
	{
	  max = temp;
	  num = i;
	}
    }
  return num;
}
int main ()
{
  int a, b;
  cin >> a >> b;
  cout << maxExponents (a, b);
  return 0;
}