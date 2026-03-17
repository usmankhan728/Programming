#include<iostream>
using namespace std;

main(){
int win;
int loss;
int draw;
int point;

cout<<"enter won matches:"<<endl;
cin>>win;
cout<<"enter lost matches:"<<endl;
cin>>loss;
cout<<"enter draw matches:"<<endl;
cin>>draw;

point = (win * 3) + (draw * 1) + (loss * 0);
cout<<"your total points are:"<<point<<endl;
}