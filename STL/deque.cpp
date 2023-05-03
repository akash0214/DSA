#include <iostream>
#include <deque>//Doubly ended queue : Insertion & deletion can be done from both sides. This is also dynamic
int main() {
    std::deque<int> deq;
    deq.push_back(2);
    deq.push_front(1);
    //similarly pop_front & pop_back, deq.front() & deq.back(), deq.empty()
    for(int i : deq){
        std::cout<<i<<" ";
    }
    std::cout<<"\n";
    std::cout<<"Element at index 1 : "<<deq.at(1)<<"\n";
    deq.erase(deq.begin(), deq.begin()+1); //will erase from first parameter index to the second parameter// excluding the second parameter index
    return 0;
}