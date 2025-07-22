#include<iostream>

using namespace std;

int main(){
    int limit;
    cout<<"Enter the limit: ";
    cin>>limit;
    int sum = 0;
    for (int i=0; i < limit; i++){
        if (i%2!=0){
            sum+=i;
        }
    }
    cout<<"The sum of odd numbers is "<<sum<<" upto "<<limit<<endl;
    return 0;
}