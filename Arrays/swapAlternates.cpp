#include <iostream>

int main() {
  int arr[6] = {6,8,3,4,1,9};
  for(int i=0; i<6; i+=2){
    if(i+1 < 6){
      std::swap(arr[i],arr[i+1]);
    }
  }
  for(int i=0; i<6; i++){
    std::cout<<arr[i]<<" ";
  }
  return 0;
}