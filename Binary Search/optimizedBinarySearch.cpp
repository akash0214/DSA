//Here we keep mid = (s + ((e-s)/2)) to not to exceed the limit of int
//in any edge case
#include <iostream>
int binSearch(int arr[], int n, int key){
  int start = 0;
  int end = n-1;
  int mid = (start+end)/2;
  while(start <= end){
    if(arr[mid] == key){
      return mid;
    }
    else if(arr[mid] < key){
      start = mid+1;
    }
    else{
      end = mid-1;
    }
    mid = start + ((end - start)/2);
  }
  return -1;
}
int main() {
  int arr[8] = {3,6,9,12,19,34,52,69};
  int key;
  std::cout<<"Enter the number you want to search : ";
  std::cin>>key;
  if(binSearch(arr, 8, key) != -1){
    std::cout<<"The number found at index : "<<binSearch(arr, 8, key);
  }
  else{
    std::cout<<"Required number not found !!";
  }
  return 0;
}