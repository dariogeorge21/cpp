#include<iostream>

using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    if (num1>num2){
        cout<<num1<<" is greater!!"<<endl;
    }
    else if (num1<num2){
        cout<<num2<<" is greater!!"<<endl;
    }else{
        cout<<"Numbers are equal!!"<<endl;
    }
    return 0;
}