#include<iostream>
using namespace std;
main(){
    int temp1,temp2,diff;
    cout<<"enter temprature of one city: "<<endl;
    cin>>temp1;
    cout<<"enter temprature of the other city: "<<endl;
    cin>>temp2;
    diff = temp1 - temp2;
    if(diff >> 10){
        cout<<"differnece is too big:"<<endl;}
        else{
            cout<<"differnece is in normal range:"<<endl;
            cout<<"program end"<<endl;
        }
    }