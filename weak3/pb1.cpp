#include<iostream>
using namespace std;
main(){
    string name;
    int ticket_price;
    int final_price;
cout<<"enter country name:"<<endl;
cin>>name;
cout<<"inter ticket price in dollar:"<<endl;
cin>>ticket_price;
    if(name == "ireland"){
        final_price = ticket_price * 0.1;
        cout<<"your final ticket price in dollae is:"<<final_price<<endl;}
        else{
            final_price = ticket_price * 0.05;
            cout<<"your final ticket price in dollar is:"<<final_price<<endl;
        }    
    }
