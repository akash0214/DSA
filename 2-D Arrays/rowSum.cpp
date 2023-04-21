#include <iostream>
void rowSum(int arr[][3], int row, int col){
    std::cout<<"Printing the sum of rows : "<<"\n";
    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
            sum += arr[i][j];
        }
        std::cout<<sum<<"\n";
    }
}
int maxRowSum(int arr[][3], int row, int col){
    int rowIndex = -1;
    int maxi = INT8_MIN;
    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
            sum += arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = i;
        }
    }
    std::cout<<"The max row sum : "<<maxi<<"\n";
    std::cout<<"And the index of that row is : ";
    return rowIndex;
}
int main() {
    int arr[3][3];
    std::cout<<"Enter the elements in the array : "<<"\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            std::cout<<(i*3)+j<<" : ";
            std::cin>>arr[i][j];
        }
    }
    std::cout<<maxRowSum(arr, 3, 3);
    return 0;
}