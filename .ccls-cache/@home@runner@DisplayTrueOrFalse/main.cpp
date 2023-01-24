#include <iostream>
using namespace std;

int main() 
{
  int x, y;
  const bool TRUE_VALUE = true;

  cout << "Enter a value for x:" << endl;
  cin >> x;

  cout << "Enter a value for y:" << endl;
  cin >> y; 
  if (x < y == TRUE_VALUE)
    cout << "x is less than y" << endl;
  else if (x == y)
    cout << "x and y are equal" << endl;
  else 
    cout << "x is greater than y" << endl;
  return 0;
}