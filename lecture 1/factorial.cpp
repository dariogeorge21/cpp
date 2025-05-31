#include<iostream>

using namespace std;

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int fac=1;
    for (int i=2;i<=number;i++){
        fac*=i;
    }
    cout<<"Factorial of "<<number<<" is "<<fac<<endl;
    return 0;
}