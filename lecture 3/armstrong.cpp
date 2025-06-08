#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num,armNum=0,temp,length=0;
    cout<<"Enter a number: ";
    cin>>num;
    temp=num;
    while(temp!=0){
        length++;
        temp/=10;
    }
    temp=num;
    while (temp!=0){
        int digit=temp%10;
        int add=pow(digit,length);
        armNum+=add;
        temp/=10;
    }
    if (armNum==num){
        cout<<"The number is armstrong!!"<<endl;
    }else{
        cout<<"The number is not armstrong!!"<<endl;
    }
    return 0;
}