#include <iostream>
void selectionSort(int arr[], int size){
    for(int i = 0; i < size-1; i++){
        int minIndex = i;
        for(int j = i; j < size; j++){
           if(arr[j] < arr[minIndex]){
               arr[j] += arr[minIndex];
               arr[minIndex] = arr[j] - arr[minIndex];
               arr[j] = arr[j] - arr[minIndex];
           } 
        }
    }
}
int main() {
    int arr[5] = {6,9,2,-31,21};
    int size = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, size);
    std::cout<<"The sorted array is : ";
    for(int i = 0; i < size; i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}