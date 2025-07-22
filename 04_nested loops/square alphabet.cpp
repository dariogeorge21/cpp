#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    for (int i = 0; i < n; i++){
        char a='A';
        for (int j=0 ;j<n;j++){
            cout<<a;
            a++;
        }cout<<endl;
    }
    return 0;
}