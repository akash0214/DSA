// Array contains elements from 1 to n
#include <iostream>
void allDuplicates(int arr[], int n) {
  int numRange[100];
  for (int i = 0; i < n; i++) {
    numRange[i] = i + 1;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (arr[i] == numRange[j]) {
        arr[i] = -1;
        numRange[j] = -1;
      }
      if (numRange[j] > arr[i]) {
        break;
      }
    }
  }
  std::cout << "\nThe duplicate elements are : ";
  for (int i = 0; i < n; i++) {
    if (arr[i] != -1) {
      std::cout << arr[i] << " ";
    }
  }
}

int main() {
  int arr[100];
  int n;
  std::cout << "Enter the size of the array(under 100) ";
  std::cin >> n;
  std::cout << "Enter the elements in the array(ranging from 1 to size) :\n";
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }
  allDuplicates(arr, n);
  return 0;
}