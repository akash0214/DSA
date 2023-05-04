#include <iostream>
#include <stack> //Last in first out !!
int main() {
    std::stack<std::string> name;
    name.push("Akash");
    name.push("Pratap");
    name.push("Singh");
    std::cout<<"The top element is : "<<name.top()<<"\n";
    name.pop();
    std::cout<<"After pop top element is : "<<name.top()<<"\n";
    std::cout<<"Size of stack is : "<<name.size();
    return 0;
}