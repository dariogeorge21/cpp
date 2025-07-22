#include<iostream>

using namespace std;

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    for(int i=0; i<number; i++){
        char a='A';
        for(int j=0; j<i+1;j++){
            cout<<a<<" ";
            a++;
        }cout<<endl;
    }
    return 0;
}