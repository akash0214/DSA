#include <iostream>
void bubbleSort(int arr[], int size){
    bool swapped = false;    //Optimised for no swap in a round
    for(int i = 0; i<size-1; i++){
        for(int j = 0; j < size-1-i; j++){
            if(arr[j] > arr[j+1]){
                arr[j] += arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
                swapped = true;
            }
        }
        if(!swapped){
            break;    //No swaps in a round means array got already sorted
        }
    }
}
int main() {
    int arr[5] = {5, 1, 98, -6, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, size);
    std::cout<<"The sorted array is : ";
    for(int i = 0; i < size; i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}