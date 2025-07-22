#include<iostream>

using namespace std;

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int a=1;
    for(int i = 0; i<number; i++){
        for (int j=0; j<i+1;j++){
            cout<<a<<" ";
            a++;
        }cout<<endl;
    }
    return 0;
}