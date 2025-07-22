#include<iostream>

using namespace std;

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    for (int i=0;i<number; i++){
        for (int j =1;j< i+1; j++){
            cout<<(" ");
        }
        for(int j=number-i; j>0; j--){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}