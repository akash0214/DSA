//An array of size n is having numbers from 1 to n-1
//All numbers are present once one number is present twice
//Find that duplicate number 
#include <iostream>
int findDuplicate(int arr[], int n){
  int ans = 0;
  for(int i = 0; i<n; i++){
    ans = ans^arr[i]^i;
  }
  return ans;
}

int main() {
  int arr[100];
  int n;
  std::cout<<"Enter the size of array (less than 100)";
  std::cin>>n;
  std::cout<<"\nEnter the values in the array :\n";
  for(int i = 0; i<n; i++){
    std::cin>>arr[i];
  }
  std::cout<<"\nThe duplicate element in the array is : ";
  std::cout<<findDuplicate(arr,n)<<" \n";
  return 0;
}