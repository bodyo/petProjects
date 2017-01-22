#include <iostream>
using namespace std;
int main()
{
  cout << "Enter three-digit number" << endl;
  int i;
  cin >> i;
  int a = i/100;
  a += (i/10) % 10;
  a += (i % 100) % 10;
  cout << a << endl;
  return 0;
}
