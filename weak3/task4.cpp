#include<iostream>
using namespace std;

main(){
string my_password,user_enter;
my_password = "1234";
cout<<"enter your code:"<<endl;
cin>>user_enter;
if(user_enter ==my_password){
cout<<"wow ! you cracked the code"<<endl;}
else{
    cout<<"wrong password:"<<endl;
    }
}