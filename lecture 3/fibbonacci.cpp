#include<iostream>
using namespace std;

int main(){
    int limit;
    cout<<"Enter the limit: ";
    cin>>limit;
    int first=0,second=1,next;
    cout<<first<<"\t"<<second<<"\t";
    for (int i=0;i<limit;i++){
        next=first+second;
        first=second;
        second=next;
        cout<<second<<"\t";
    }
    return 0;
}