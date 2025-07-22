#include<iostream>

using namespace std;

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    for(int i=0; i<number; i++){
        for(int j=0;j<number-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<j+1;
        }
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}