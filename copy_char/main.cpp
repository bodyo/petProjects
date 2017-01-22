#include <iostream>

using namespace std;
template <typename t>
void coppy(const t *arr1, t *arr2, const int size)
{
  for(int i = 0; i < size; ++i)
    arr2[i] = arr1[i];
}
template<typename r>
void show(const r *arr, const int size)
{
  for(int i = 0; i < size; ++i)
    cout << arr[i];
}

int main()
{
  int size_of_array;
  cout << "Enter size of array\n";
  cin >> size_of_array;
  cin.ignore();
  char *arr = new char[size_of_array];
  cout << "Input elements of array\n";
  cin.getline(arr, size_of_array+1);
  char *copy_of_arr = new char[size_of_array];
  coppy(arr, copy_of_arr, size_of_array);
  cout << "First array:\n";
  show(arr, size_of_array);
  cout << "\nSecond array:\n";
  show(copy_of_arr, size_of_array);
  cout << endl;
  delete[] arr;
  delete[] copy_of_arr;
}
