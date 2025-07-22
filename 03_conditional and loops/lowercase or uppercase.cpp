#include<iostream>
using namespace std;

int main(){
    char input;
    cout<<"Enter a character: ";
    cin>>input;
    if (input>='A' && input<='Z'){
        cout<<"The input character is in uppercase!!"<<endl;
    }
    else if (input>='a' && input<='z'){
        cout<<"The input character is in lowercase!!"<<endl;
    }
    else{
        cout<<"The input character is not an alphabet!!"<<endl;
    }
    return 0;
}