#include<iostream>
using namespace std;

int main(){
    int limit;
    cout<<"Enter the limit: ";
    cin>>limit;
    int first=0,second=1,next;
    cout<<first<<"\t"<<second<<"\t";
    for (int i=2;i<limit;i++){
        next=first+second;
        first=second;
        second=next;
        cout<<next<<"\t";
    }
    cout<<endl;
    return 0;
}