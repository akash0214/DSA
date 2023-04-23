#include <iostream>
void insertionSort(int arr[], int size){
    int i = 1;
    while(i < size){
        int temp = arr[i];
        int j = i-1;
        while(j >= 0){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
                j--;
            }
            else{
  std::cout << "Hello World!\n";
                break;
            }
        }
        arr[j+1] = temp;
        i++;
    }
}
int main() {
    int arr[5] = {3, 5, 1, 90, -21};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, size);
    std::cout<<"The sorted array is : ";
    for(int i = 0; i < size; i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}