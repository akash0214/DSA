#include <iostream>
int pElement(int arr[], int size){
  int s = 0, e = size-1;
  int mid = (s + e)/2;
  while(s < e){
    if(arr[mid] < arr[mid+1]){
      s = mid + 1;
    }
    else{
      e = mid;
    }
    mid = s + ((e-s)/2);
  }
  return s;
}

int main() {
  int arr[6] = {2,4,6,3,1,0};
  std::cout<<"The peak element of this mountain array is : "<<arr[pElement(arr, 6)];
  return 0;
}