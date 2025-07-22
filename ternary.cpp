#include<iostream>

using namespace std;

int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;
    (number>0)?cout << "Positive" << endl : cout << "Negative" << endl;
    return 0;
}