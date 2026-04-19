#include<iostream>
using namespace std;

float taxcalculator(char type,float price);
int main(){
    float taxrate;
    cout<<"enter the type of car in (m/e/s/v/t) :";
    char type;
    cin>>type;
    cout<<"enter the price of selcted product :";
    float price;
    cin>>price;
    cout<<"the final price of the selcter product of "<<type<< " is $"<<taxcalculator(type,price)<<endl;
}
float taxcalculator(char type,float price){
     float taxrate=0;
     if(type=='m'){
        taxrate = 0.06;
     }else if(type=='e'){
        taxrate= 0.08;
     }else if(type=='s'){
        taxrate= 0.1;
     }else if(type=='v'){
        taxrate= 0.12;
     }else if(type=='t'){
        taxrate=0.15;
     }
     return price+(price*taxrate);
}