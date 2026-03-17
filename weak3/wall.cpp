#include<iostream>
using namespace std;

main(){
int squremeter_to_paint;
int width;
int hight;
int walls;
int area;

cout<<"enter number of squre meter to paint:"<<endl;
cin>>squremeter_to_paint;
cout<<"enter width of the wall(in meter):"<<endl;
cin>>width;
cout<<"enter hight of the wall(in meter)"<<endl;
cin>>hight;

area = width * hight;
walls = squremeter_to_paint / area;
cout<<"number of wall you can pain is:"<<walls<<endl;
}
