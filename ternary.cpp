#include<iostream>

using namespace std;

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    (number%2==0)?cout<<number<<" is even"<<endl:cout<<number<<" is odd"<<endl;
}