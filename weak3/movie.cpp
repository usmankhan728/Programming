#include<iostream>
using namespace std;

main(){
string name;
int ticketprice;
int soldticket;
int percent_to_charity_given(10);
int total_money;
int remaining_money;
cout<<"enter name of movie"<<endl;
cin>>name;
cout<<"enter ticketprice of adult"<<endl;
cin>>ticketprice;
cout<<"enter ticketprice of child"<<endl;
cin>>ticketprice;
cout<<"enter number of soldticket of adult"<<endl;
cin>>soldticket;
cout<<"enter number of soldticket of child"<<endl;
cin>>soldticket;
cout<<"enter given percent to charity"<<endl;
cin>>percent_to_charity_given;
total_money = soldticket * ticketprice;
cout<<"total money is "<<total_money<<endl;
percent_to_charity_given = total_money * (10 / 100);
cout<<"money given to charity:"<<percent_to_charity_given<<endl;
remaining_money = total_money - percent_to_charity_given;
cout<<"remaing money is "<<remaining_money<<endl;
}