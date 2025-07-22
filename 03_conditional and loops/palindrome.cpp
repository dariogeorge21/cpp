#include<iostream>
using namespace std;

int main(){
    int num,revNum=0,temp;
    cout<<"Enter a number: ";
    cin>>num;
    temp=num;
    while (temp!=0){
        int digit=temp%10;
        revNum=revNum*10+digit;
        temp/=10;
    }
    if (revNum==num){
        cout<<"The number is a palindrome!!"<<endl;
    }
    else{
        cout<<"The number is not palindrome!!"<<endl;
    }
    return 0;
}