#include<iostream>
using namespace std;

int final;
int taxcalcul(char type,int price){
       if(type == 'm'){
          final == price * 6/100;
       }else if(type = 'e'){
        final = price * 8/100;
       }
       return final;
}


int main(){
    cout<<"enter vihicle type (M/E/S/V/E/T) "<<endl;
    char type;
    cin>>type;
    cout<<"enter the price of vihicle "<<endl;
    int price;
    cin>>price;
cout<<"the final price of " <<type<< " is " << rp
4price + taxcalcul(type,price);
return 0;

}