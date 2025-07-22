#include<iostream>

using namespace std;

int main(){
    int limit;
    cout<<"Enter the limit: :";
    cin>>limit;
    int sum = 0;
    for (int i = 0; i < limit; i++){
        sum+=i;
    }
    cout<<"The sum of numbers upto "<< limit << " is "<< sum << endl;
    return 0;
}
