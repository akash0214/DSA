#include <iostream>
#include <map>//Contains key value pairs and one key can point to only one value but two keys can point to same
                //value
int main() {
    std::map<int, std::string> m;//this is ordered
    m[1] = "Akash";
    m[5] = "Singh";
    m.insert({3, "Pratap"});
    for(auto i : m){
        std::cout<<i.first<<" "<<i.second<<"\n";
    }
    std::cout<<"Is key 5 present : "<<m.count(5)<<"\n";
    m.erase(3);
    for(auto i : m){
        std::cout<<i.first<<" "<<i.second<<"\n";
    }
     return 0;
}