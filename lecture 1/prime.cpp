#include<iostream>

using namespace std;

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int prime=1;
    for (int i=2;i<number;i++){
        if (number%i==0){
            prime=0;
            break;
        }
    }
    if (prime==1){
        cout<<number<<" is prime!!"<<endl;
    }else{
        cout<<number<<" is not prime!!"<<endl;
    }
    return 0;
}