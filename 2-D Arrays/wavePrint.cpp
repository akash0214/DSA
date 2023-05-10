//Wave print : Print a column top to down then next down to top and so on...
#include <iostream>
void wavePrint(int arr[][3], int row, int col){
    std::cout<<"The wave print of the array is : ";
    for(int i = 0; i < col; i++){
        int j = 0;
        if(i % 2 != 0){
            j = row-1;
            while(j >= 0){
                std::cout<<arr[j][i]<<" ";
                j--;
            }
        }
        else{
            while(j < row){
                std::cout<<arr[j][i]<<" ";
                j++;
            }
        }
    }
}

int main() {
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    wavePrint(arr, 3, 3);
    return 0;
}
