/*
Frida Mesa 
2/06/23
Lab quiz 2
 */
 
#include <iostream>
using namespace std;

int main()
{
  int first;
  int second;
  
  cout << "Enter the first number: " << endl;
  cin >> first;
  
  cout << "Enter the second number: " << endl;
  cin >> second;

  if (first > second)
  {
    cout << first << endl;
  }

  else if (second > first)
  {
    cout << second << endl;
  }

  return 0;
}
