#include <iostream>
//After the end character of char array or string '\0' is added to identify that it is the end of it
//Compiler will stop as soon as it finds a '\0'(null character)
void reverse(char ch[], int n){
    int s = 0, e = n-1;
    while(s <= e){
        std::swap(ch[s++], ch[e--]);
    }
}
char toLower(char ch){
    if(ch>='a' && ch <= 'z'){
        return ch;
    }
    else{
        return(ch - 'A' + 'a');
    }
}
bool palindrome(char ch[], int n){
    int s = 0, e = n-1;
    while(s<=e){
        if(toLower(ch[s]) == toLower(ch[e])){
            s++;
            e--;
        }
        else{
            return 0;
        }
    }
    return 1;
}

int getLength(char name[]){//No need to give size of char array in function parameter
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main() {
    char name[20];
    std::cout<<"Enter the name : ";
    std::cin>>name;//cin stops execution whenever it gets space \t or newline/enter so if we give space in between
                    //it will accept only the characters just before the space
    std::cout<<"\nThe name is : "<<name<<"\n";
    std::cout<<"The length of character array is : "<<getLength(name)<<"\n";
    int length = getLength(name);
    reverse(name, length);
    std::cout<<"The reversed char array is : "<<name<<"\n";
    std::cout<<"The string is palindrom : "<<palindrome(name, length);
    char ch;
    std::cout<<"\nEnter a character : ";
    std::cin>>ch;
    std::cout<<"\nThe character in lower case : "<<toLower(ch);
    return 0;
}
