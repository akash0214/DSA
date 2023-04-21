#include <iostream>

int main() {
    int arr1[3][4]; //On initialising a 2d array we at least need to define number of columns
    int arr2[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr3[3][4] = {{1,11,111,1111}, {2,22,222,2222},{3,33,333,3333}};
    //taking input row wise
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 4; j++){
    //         std::cin>>arr1[i][j];
    //     }
    // }
    //taking input column wise
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            std::cin>>arr1[j][i];
        }
    }
    //output
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            std::cout<<arr1[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}