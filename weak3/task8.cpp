#include<iostream>
using namespace std;
main(){
char ch;
cout<<"enter any charecter in lower case:"<<endl;
cin>>ch;
if(ch == 'a' || ch =='e' || ch == 'i' || ch == 'o' || ch == 'u'){
    cout<<"the charecter is a vowel"<<endl;
}
    else{
        cout<<"the charecter is consonent"<<endl;
    }
}
