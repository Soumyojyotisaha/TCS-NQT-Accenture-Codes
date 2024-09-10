#include<iostream>
using namespace std;
//Function to calculate the factorial of the individual digits
int Factorial(int n) {
   int fact = 1;
   for (int i = 1; i <= n; i++) {
      fact = fact * i;
   }
   return fact;
}
//Function to compute sum of factorials
int Strong_No(int num) {
   int sum = 0;
   //Extract all the digits from num
   while (num > 0) {
      int digit = num % 10;
      sum = sum + Factorial(digit);
      num = num / 10;
   }
   return sum;
}
int main() {
   int number = 145;
   int answer = Strong_No(number);
   if (answer == number && number != 0) {
      cout << "YES";
   } 
else {
      cout << "NO";
   }
}