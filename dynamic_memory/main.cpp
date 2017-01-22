#include <iostream>

using namespace std;

int main()
{
  cout << "Enter size of array\n";
  int size_of_array;
  cin >> size_of_array;
  int *arr = new int[size_of_array];
  cout << "Input elements of array\n";
  for(int i = 0; i < size_of_array; ++i)
    cin >> *(arr+i);
  for(int i = size_of_array - 1; i >= 0; --i)
      cout << arr[i] << ' ';
  delete[] arr;
}
