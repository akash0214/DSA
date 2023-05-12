#include <iostream>
 int naive_gcd(int a, int b){
     int ans = 1;
     for(int i = 1; i <= std::min(a,b); i++){
         if(a%i == 0 && b%i==0){
             ans = i;
         }
     }
     return ans;
 }
int euclid_gcd(int a, int b){
    if(a == b){
        return a;
    }
    int ans = 1;
    while(a != 0 && b != 0){
        if(a < b){
            b = b%a;
            ans = a;
        }
        else{
            a = a%b;
            ans = b;
        }
    }
    return ans;
}
int main() {
    int a,b;
    std::cout<<"Enter the first number : ";
    std::cin>>a;
    std::cout<<"\nEnter the second number : ";
    std::cin>>b;
    std::cout<<"\nThe GCD using naive algo is : "<<naive_gcd(a,b);
    //std::cout<<"\nThe GCD using Euclid Algorithm is : "<<euclid_gcd(a, b);
    return 0;
}
