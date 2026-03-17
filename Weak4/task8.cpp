#include<iostream>
using namespace std;
main(){
    int age;
    float price,toyPrice;
    cout<<"enter age,price and toy price"<<endl;
    cin>>age;
    cin>>price;
    cin>>toyPrice;
    int toys = 0;
    float money = 0.0;
    float gift;
    for(int i=1; i<+age; i++){
    if (i%2!=0){
        toys++;
    }else{
        money +=gift;
        money -=1.0;
        gift +=1.0;
    }
 }
 if(money >=price)
 {
    cout<<"yes!"<<endl;
    cout<<money-price<<endl;
 }else{
    cout<<"no!"<<endl;
    cout<<price-money<<endl;
 }
}