#include <iostream>
#include <time.h>
#include <random>
using namespace std;

int main()
{
  srand(time(NULL));
  int mas[5];
  cout << "Do you want input numbers? y/n" << endl;
  char r;
  cin >> r;
  if(r == 'n'||r == 'N')
  {
      for(int i = 0; i < 5; i++)
        mas[i] = rand()% 51 - 25;
  }
  else
  {
    cout << "Input 5 numbers:" << endl;
    for(int i = 0; i < 5; i++)
      cin >> mas[i];
  }
  for(int i = 0; i < 5; i++)
    cout << mas[i] <<' ';
  cout << endl;
  int max = mas[0];
  for(int i = 1; i < 5; i++)
  {
      if(max < mas[i])
        max = mas[i];
  }
  cout << "The max number of 5 numbers is " << max << endl;
  return 0;
}
