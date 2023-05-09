#include <iostream>
#include <algorithm>
#include <vector>
int main() {
    std::vector<int> v;
    v.push_back(6);
    v.push_back(8);
    v.push_back(9);
    v.push_back(11);
    std::cout<<"Finding 8 : "<<std::binary_search(v.begin(), v.end(), 8)<<"\n";//Will tell if the number is
            //present or not
    std::cout<<"Iterator for the element : "<<lower_bound(v.begin(), v.end(), 9) - v.begin()<<"\n";
    int a = 5, b = 8;
    std::cout<<"Max : "<<std::max(a,b)<<"\n";//Similarly for min
    std::swap(a,b);
    std::string abcd = "abcd";
    std::reverse(abcd.begin(), abcd.end());
    std::cout<<"Reversed string : "<<abcd<<"\n";
    sort(v.begin(), v.end());
    std::cout<<"Sorted array : ";
    for(int i:v){
        std::cout<<i<<" ";
    }
    return 0;
}