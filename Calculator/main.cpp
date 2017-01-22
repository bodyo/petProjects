#include <iostream>
#include <cmath>
using namespace std;
double calculator(double a, double b, char opetor)
{
  if(a == 0 && b == 0)
    return 0;
  switch (opetor) {
    case 'q':
      a = sqrt(a);
      break;
    case 't':
      a = tan(a);
      break;
    case 'c':
      a = cos(a);
      break;
    case 's':
      a = sin(a);
      break;
    case '+':
      a = a + b;
      break;
    case '-':
      a = a - b;
      break;
    case '/':
      if(b == 0)
      {
        cout << endl << "Operation is imposible!" << endl;
        return 0;
      }
      a = a / b;
      break;
    case '*':
      a = a * b;
      break;
    case 'p':
      a = pow(a, b);
      break;
    case '%':
      a = (int)a % (int)b;
      break;
    default:
      cout << "Command is not found" << endl;
      return 0;
    }
  return a;
}

int main()
{
  double a;
  double b = 0;
  char opera;
  cout << "Hello I'm calculator! Let's begin\nInput numbers:" << endl;
  do
  {
      cin >> a >> opera;
      if(opera == 'q' || opera == 't' || opera == 's' || opera == 'c')
        cout << "= " << calculator(a, b, opera) << endl;
      else
      {
        cin >> b;
        cout << "= " << calculator(a, b, opera) << endl;
      }
      cout << "Do you want to continue? y/n";
      cout << endl;
      cin >> opera;
  }
  while(opera == 'y'||opera == 'Y');
  cout << endl;
}
