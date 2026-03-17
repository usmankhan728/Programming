#include<iostream>
using namespace std;

main(){
int age,moves,average_servive;

cout<<"enter the person age:"<<endl;
cin>>age;
cout<<"enter number of time he moved to another house:"<<endl;
cin>>moves;

average_servive = age / moves;
cout<<"average number of years lived in a single house:"<<average_servive<<endl;
}