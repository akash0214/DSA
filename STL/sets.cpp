#include <iostream>
#include <set> //contains unique values in ordered manner
int main() {
    std::set<int> s;
    s.insert(6);
    s.insert(3);
    s.insert(8);
    s.insert(1);
    for(int i : s){
        std::cout<<i<<" ";
    }
    std::cout<<"\n";
    std::set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for(int i : s){
        std::cout<<i<<" ";
    }
    std::cout<<"\nIs 5 present ?? "<<s.count(5);
    std::set<int>::iterator itr = s.find(8);//Will return the iterator of 8
    std::cout<<"\nValue present at iterator itr : "<<*itr;
    return 0;
}