#include<iostream>
using namespace std;

int main(){
    int limit;
    cout<<"Enter the limit: ";
    cin>>limit;
    int first=0,second=1,next;
    cout<<first<<"\t"<<second;
    for (int i=0;i<limit;i++){
        next=first+second;
        first=second;
        second=next;
        cout<<first<<"\t";
        cout<<second<<"\t";
    }
    return 0;
}