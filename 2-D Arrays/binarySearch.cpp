#include <iostream>
#include <vector>
bool binSearch(std::vector<std::vector<int>> v, int key){
    int row = v.size();
    int col = v[0].size();
    int s = 0;
    int e = (row*col)-1;
    int mid = s + ((e-s)/2);
    while(s <= e){
        int element = v[mid/col][mid%col];
        if(key == element){
            return 1;
        }
        else if(key > element){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + ((e-s)/2);
    }
    return 0;
}
int main() {
    std::vector<std::vector<int>> v = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int key;
    std::cout<<"Enter the number to be searched : ";
    std::cin>>key;
    std::cout<<"\nElement found ? --> "<<binSearch(v, key);
    return 0;
}
