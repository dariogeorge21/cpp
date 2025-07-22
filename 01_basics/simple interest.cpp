#include<iostream>

using namespace std;

int main(){
    int si,p,r,t;
    cout<<"Enter the principal amount: ";
    cin>>p;
    cout<<"Enter the rate: ";
    cin>>r;
    cout<<"Enter the time: ";
    cin>>t;
    si=p*r*t;
    cout<<"Simple Interest: "<<si<<endl;
    return 0;
}