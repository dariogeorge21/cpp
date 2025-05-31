#include<iostream>

using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter the limit: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"Sum of numbers upto "<<n<<" is "<<sum<<endl;
    return 0;
}