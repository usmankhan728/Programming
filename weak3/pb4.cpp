#include<iostream>
using namespace std;
main(){
    float red,white,tulip,totalp,padiscount;
    cout<<"enter mumber of red roses: ";
    cin>>red;
    cout<<"enter number of white roses: ";
    cin>>white;
    cout<<"enter number of tulips: ";
    cin>>tulip;
    totalp = (red * 2.0) + (white * 4.1) + (tulip * 2.5);
    cout<<"total price of the flowers is: "<<totalp<<endl;
    if(totalp > 200){
        padiscount = totalp * 0.2;
        cout<<"your price after discount is:" <<padiscount<<endl;}
        else{
            cout<<"sorry...u will pay the exact amount: "<<endl;

        }
    }
