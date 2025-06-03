#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    bool isPrime=true;
    for(int i=2;i<num;i++){
        if(num%i==0){
            isPrime=false;
            break;
        }
    }
    if (isPrime){
        cout<<num<<" is a prime number!!"<<endl;
    }
    else{
        cout<<num<<" is not a prime number!!"<<endl;
    }
    return 0;
}