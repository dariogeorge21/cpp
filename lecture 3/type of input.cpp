#include<iostream>
using namespace std;

int main(){
    char input;
    cout<<"Enter the input: ";
    cin>>input;
    if ((input>='A'&& input<='Z')||(input>='a' && input<='z')){
        cout<<"Its a character!!"<<endl;
    }
    else if ((int(input)>=48)&&(int(input)<=57)){
        cout<<"Its a digit!!"<<endl;
    }
    else{
        cout<<"Its a special character!!"<<endl;
    }
    return 0;
}