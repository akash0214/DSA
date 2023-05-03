#include <iostream>
#include <vector> //Vectors are dynamic arrays, when we need more size it makes a new array of double size
//and disposes the previous array
int main() {
    std::vector<int> v;
    std::vector<int> vec(3,1); //If we already know the size of vector then 3 is the size and all elements are
    //initialized with 1
    std::vector<int> copy(vec); //Vector vec is copied into vector copy
    std::cout<<"Capacity ==> "<<v.capacity()<<"\n";
    v.push_back(1);
    std::cout<<"Capacity ==> "<<v.capacity()<<"\n";
    v.push_back(2);
    std::cout<<"Capacity ==> "<<v.capacity()<<"\n";
    v.push_back(3);
    std::cout<<"Capacity ==> "<<v.capacity()<<"\n";//This tells storage of how many elements is taken
    std::cout<<"Size ==> "<<v.size()<<"\n"; //This tells how much values are present
    v.push_back(4);
    std::cout<<"Capacity ==> "<<v.capacity()<<"\n";
    std::cout<<"Element at 2nd index : "<<v.at(2)<<"\n";
    std::cout<<"Front : "<<v.front()<<"\n";
    std::cout<<"Back : "<<v.back()<<"\n";
    std::cout<<"Before pop !!\n";
    for(int i : v){
        std::cout<<i<<" ";
    }
    std::cout<<"\n";
    v.pop_back();
    std::cout<<"After pop !!\n";
    for(int i : v){
        std::cout<<i<<" ";
    }
    v.clear();//For clearing the elements of vector
    return 0;
}