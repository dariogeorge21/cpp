#include<iostream>

using namespace std;

int main(){
    int limit;
    cout<<"Enter the limit: ";
    cin>>limit;
    int sum = 0, i = 0;
    while (i<limit){
        if (i%2!=0){
            sum+=i;
        }
        i++;
    }
    cout<<"The sum of odd numbers is "<<sum<<" upto "<<limit<<endl;
    return 0;
}