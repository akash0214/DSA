#include <iostream>
#include <array> //array
//This is just like normal static array but with some functionalities

int main() {
    std::array<int, 4> arr = {1, 2, 3, 4};
    int size = arr.size();
    for(int i = 0; i < size; i++){
        std::cout<<arr[i]<<"\n";
    }
    std::cout<<"Element at 2nd index is : "<<arr.at(2)<<"\n";
    std::cout<<"Is the array empty ?? "<<arr.empty()<<"\n";
    std::cout<<"First element : "<<arr.front()<<"\n";
    std::cout<<"Last element : "<<arr.back();
    return 0;
}