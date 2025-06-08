#include<iostream>
using namespace std;

int main(){
    char input;
    cout<<"Enter a character: ";
    cin>>input;
    if((input<='z' && input>='a')||(input>='A' && input<='Z')){

        if (input=='A' || input=='E' || input=='I' || input=='O' || input=='U' ||
             input=='a' || input=='e' || input=='o' || input=='i' || input=='u'){
                cout<<"The input character is a vowel!!"<<endl;
        }else{
            cout<<"The input character is a consonant!!"<<endl;
        }
            
    }else{
        cout<<"The input character is not an alphabet!!"<<endl;
    }
    
    return 0;
}