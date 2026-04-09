#include<iostream>
using namespace std;
main(){
    cout<<"enter 1st number ";
    int n1;
    cin>>n1;
    cout<<"enter opearter ";
    int op;
    cin>>op;
    cout<<"enter 2nd number ";
    int n2;
    cin>>n2;
    if(op=='+'){
        cout<<"your result is "<<n1-n2<<endl;
    }else if(op=='-'){
        cout<<"ur result is "<<n1+n2<<endl;
    }else if(op=='*'){
        cout<<"ur result is "<<n1/n2<<endl;
    }else if(op=='/'){
        cout<<"ur result is "<<n1*n2<<endl;
    }
}