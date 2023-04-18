//Here we learn 2 pointer approach
#include <iostream>
void intersection(int arr1[], int arr2[], int n, int m){
  bool flag = 0;
  int i = 0, j = 0;
  std::cout<<"\nThe common elements are : ";
  while(i<n && j<m){
    if(arr1[i] == arr2[j]){
      std::cout<<arr1[i]<<" ";
      flag = 1;
      i++;
      j++;
    }
    else if(arr1[i]<arr2[j]){
      i++;
    }
    else{
      j++;
    }
  }
  if(!flag){
    std::cout<<"No common elements found !!";
  }
}

int main() {
  int arr1[100], arr2[100];
  int n, m;
  std::cout<<"Enter the size of array 1 and 2 : ";
  std::cin>>n;
  std::cin>>m;
  std::cout<<"Enter the elements in array 1 :";
  for(int i = 0; i<n; i++){
    std::cin>>arr1[i];
  }
  std::cout<<"Enter the elements in array 2 :";
  for(int i = 0; i<m; i++){
    std::cin>>arr2[i];
  }
  intersection(arr1, arr2, n, m);
}