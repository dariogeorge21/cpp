#include<iostream>

using namespace std;

int main() {
    bool a=true,b=false;
    cout<<"a&b: "<<(a&&b)<<endl;//logical AND
    cout<<"a|b: "<<(a||b)<<endl;//logical OR
    cout<<"!a: "<<(!a)<<endl;//logical NOT
    cout<<"!b: "<<(!b)<<endl;//logical NOT
    cout<<"a^b: "<<(a^b)<<endl;//logical XOR
    return 0;
}