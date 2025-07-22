#include<iostream>

using namespace std;

int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    int flag=1;
    for (int i = 2; i*i<=num; i++){
        if(num%i==0){
            flag=0;
            break;
        }
    }    
    if(flag==1){
        cout<<"The number is prime!!"<<endl;
    }else{
        cout<<"The number is not prime!!"<<endl;
    }
    return 0;
}