#include<iostream>

using namespace std;
int main() {
    int a=5;
    cout<<"a is: "<<a<<endl;
    cout<<"++a: "<<(++a)<<endl; // Pre-increment
    cout<<"a++: "<<(a++)<<endl; // Post-increment
    cout<<"a after post-increment: "<<a<<endl; // Value of a after post-increment
    cout<<"--a: "<<(--a)<<endl; // Pre-decrement
    cout<<"a--: "<<(a--)<<endl; // Post-decrement
    cout<<"a after post-decrement: "<<a<<endl; // Value of a after post-decrement
    cout<<"-a: "<<(-a)<<endl; // Unary negation
    cout<<"+a: "<<(+a)<<endl; // Unary plus (no effect)
    return 0;
}   