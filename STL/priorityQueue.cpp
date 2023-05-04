#include <iostream>
#include <queue>
int main() {
    std::priority_queue<int> maxi; // The first element of this queue will be the largest element(max heap)
    std::priority_queue<int, std::vector<int>, std::greater<int>> mini; // min heap(First element will be min)
    maxi.push(6);
    maxi.push(8);
    maxi.push(2);
    maxi.push(4);
    int size = maxi.size();
    for(int i=0; i<size; i++){
        std::cout<<maxi.top()<<" ";
        maxi.pop();
    }
    std::cout<<"\n";
    mini.push(6);
    mini.push(2);
    mini.push(9);
    mini.push(8);
    int n = mini.size();
    for(int i=0; i<n; i++){
        std::cout<<mini.top()<<" ";
        mini.pop();
    }
    return 0;
}