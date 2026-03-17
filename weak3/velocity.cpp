#include<iostream>
using namespace std;

main(){
int initial_velocity;
int acc;
int time;
int final_velocity;
cout<<"enter initial velocity:"<<endl;
cin>>initial_velocity;
cout<<"enter acc:"<<endl;
cin>>acc;
cout<<"enter time:"<<endl;
cin>>time;
final_velocity = initial_velocity + (acc * time);
cout<<"final_velocity is"<<final_velocity<<endl;
}