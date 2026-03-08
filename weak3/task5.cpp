#include<iostream>
using namespace std;

main(){
    int amount,discount,final_bill;
cout<<"enter amount of shopping";
cin>>amount;
if(amount <=5000){
discount = amount * 0.05;
    cout<<"your discout is:"<<discount<<endl;}
    if(amount > 5000){
discount = amount * 0.1;
        cout<<"your discount is:"<<discount<<endl;
    }
}