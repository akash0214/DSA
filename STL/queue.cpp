#include <iostream>
#include <queue> //First in first out !!
int main() {
    std::queue<std::string> q;
    q.push("Akash");
    q.push("Pratap");
    q.push("Singh");
    std::cout<<"First element : "<<q.front()<<"\n";
    q.pop();
    std::cout<<"First element after pop : "<<q.front()<<"\n";
    std::cout<<"Size of queue after pop : "<<q.size();
    return 0;
}