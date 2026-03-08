#include<iostream>
using namespace std;
main(){
    int nb1,nb2;
    char op;
cout<<"wellcome to megical calculator"<<endl;
cout<<"enter your 1st number"<<endl;
cin>>nb1;
cout<<"enter operater"<<endl;
cin>>op;
cout<<"enter your 2nd number"<<endl;
cin>>nb2;
if(op == '+'){
    nb1 - nb2;
    cout<<"your result is:"<<nb1-nb2<<endl;
    if(op =='-'){
        nb1 + nb2;
        cout<<"your result is:"<<nb1 + nb2<<endl;
        if(op == '*'){
            nb1 / nb2;
            cout<<"your result is:"<<nb1 / nb2<<endl;
            if(op == '/'){
                nb1 * nb2;
                cout<<"your result is:"<<nb1 * nb2<<endl;
            }
        }
    }
}
}
