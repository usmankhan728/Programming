#include<iostream>
using namespace std;

main(){
float veg_price_per_kilogram;
float fruit_price_per_kilogram;
int total_kilogram_of_veg;
int total_kilogram_of_fruit;
float total_earning_in_coin;
float total_earning_in_rupee;

cout<<"enter veg price per kilogram (in coin):"<<endl;
cin>>veg_price_per_kilogram ;
cout<<"enter fruit price per kilogram (in coin):"<<endl;
cin>>fruit_price_per_kilogram ;
cout<<"enter total kilogram of veg:"<<endl;
cin>>total_kilogram_of_veg ;
cout<<"enter total kilogram of fruit:"<<endl;
cin>>total_kilogram_of_fruit ;

total_earning_in_coin = (veg_price_per_kilogram * total_kilogram_of_veg) + (fruit_price_per_kilogram * total_kilogram_of_fruit);
cout<<"total earning in coin is"<<total_earning_in_coin<<endl;
total_earning_in_rupee = total_earning_in_coin * 1.94;
cout<<"total earning in rupee is"<<total_earning_in_rupee<<endl;
}