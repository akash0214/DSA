//Find 2 non repeating elements in an array where all other elements are repeating twice
#include <iostream>
void showNums(int arr[], int n){
  int xorArray = 0;
  for(int i = 0; i<n; i++){
    xorArray ^= arr[i];
  }
  int mask = 1;
  while(true){
    if((mask & xorArray) != 0){
      break;
    }
    else{
      mask = mask<<1;
    }
  }
  int first = 0;
  for(int i = 0; i<n; i++){
    if((mask & arr[i]) == 1){
      first = first^arr[i]^xorArray;
    }
  }
  int second = first^xorArray;
  std::cout<<"The 2 non repeating numbers are : "<<first<<" "<<second;
}

int main() {
  int arr[8] = {1,3,4,6,2,4,1,6};
  showNums(arr, 8);
  return 0;
}