#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int num;
  int digit;
  int result = 0;
  int count = 0;
  cout << "Enter a number to check if it's an armstrong number" << endl;
  cin >> num;
  int temp = num;
  int original = num;
  while (temp != 0)
  {
    temp /= 10;
    count++; // to count the digits
  }
  while (num != 0) // assumming the number is 153
  {
    digit = num % 10;            // first loop digit=3 //second loop digit=5 //third loop digit =1
    num /= 10;                   // first loop num=15 //second loop num=1 //third loop num=0
    result += pow(digit, count); // first loop result=3^3 //second loop result=5^3+3^3 //third loop result=5^3+3^3+1^3=153;
    }
  if (original == result)
  {
    cout << "The number is an Armstrong";
  }
  else
  {
    cout << "The number is not an Armstrong";
  }
}