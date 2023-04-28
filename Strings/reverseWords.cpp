#include <iostream>
void reverseWord(char arr[], int i, int j){
    while(i <= j){
        std::swap(arr[i++], arr[j--]);
    }
}
void reverse(char arr[]){
    int i = 0, j = 0, k = 0;
    while(true){
        if(arr[k] == ' ' || arr[k] == '\0'){
            j = k-1;
            reverseWord(arr, i, j);
            i = k+1;
            if(arr[k] == '\0'){
                break;
            }
        }
        k++;
    }
}
int main() {
    std::string str = "My name is Akash";
    std::cout<<"Original string is : "<<str<<"\n";
    char arr[100];
    int i = 0;
    while(str[i] != '\0'){
        arr[i] = str[i];
        i++;
    }
    arr[i] = '\0';    //'\0' is to be added separately
    reverse(arr);
    std::cout<<"The reversed array is : "<<arr;
    return 0;
}