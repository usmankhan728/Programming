#include<iostream>
using namespace std;

main(){
int sidesofpolygon;
int sumofangles;
cout<<"enter number of sides of polygon:"<<endl;
cin>>sidesofpolygon;
sumofangles = (sidesofpolygon - 2) * 180;
cout<<"sum of all angles is"<<sumofangles<<endl;
}