#include <iostream>

using namespace std;
template<typename r>
r* concat(r *arr1, r *arr2, int size1, int size2)
{
  int newSize = size1 + size2;
  r *newcon = new r[newSize];
  for(int i = 0; i < newSize; i++)
    newcon[i] = i < size1 ?arr1[i]:arr2[i-size1];
  return newcon;
}
template<typename r>
void show(const r *arr, const int size)
{
  for(int i = 0; i < size; ++i)
    cout << arr[i] << '|';
}
int main()
{
  int size_one;
  int *arr3;
  cout << "Enter size of first array" << endl;
  cin >> size_one;
  cout << "Input first array" << endl;
  char *arr1 = new char[size_one+1];
  cin.ignore();
  cin.getline(arr1, size_one+1);
  int size_two;
  cout << "Enter size of second array" << endl;
  cin >> size_two;
  cout << "Input second array" << endl;
  char *arr2 = new char[size_two+1];
  cin.ignore();
  cin.getline(arr2, size_two+1);
  arr3 = concat(arr1, arr2, size_one, size_two);
  show(arr3, size_one+size_two);
  delete[] arr1;
  delete[] arr2;
  delete[] arr3;
  cout << endl;
}
