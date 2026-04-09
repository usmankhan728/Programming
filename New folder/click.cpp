#include<iostream>
using namespace std;
main(){
    cout<<"enter your bill :";
    int bill;
    cin>>bill;
    float discount;
    float price;
    if(bill <= 5000){
        discount = bill*5/100;
        price = bill - discount;
        cout<<"your discount is " <<discount<<endl;
        cout<<"your final bill is" <<price;
    }if(bill >= 5000){
        discount = bill*10/100;
        price = bill - discount ;
        cout<<"your discount is" <<discount<<endl;
        cout<<" your final bill is "<<price;
   }
}