#include<iostream>
using namespace std;

main(){
int size;
int cost;
int area;
float costperpound;
float costpersqurefoot;

cout<<"enter the size of bag in pound:"<<endl;
cin>>size;
cout<<"enter the cost of bag:"<<endl;
cin>>cost;
cout<<"enter the area in squre foot:"<<endl;
cin>>area;

costperpound = cost / size;
costpersqurefoot = cost / area;

cout<<"cost of bag per pound is"<<costperpound<<endl;
cout<<"cost of bag per squre foot"<<costpersqurefoot<<endl;
}