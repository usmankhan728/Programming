#include<iostream>
using namespace std;

main(){
int current;
int bpm;
int population_latter;

cout<<"current population:"<<endl;
cin>>current;
cout<<"number of birth per month:"<<endl;
cin>>bpm;

population_latter = current + (bpm * 360) ;
cout<<"population after three decade will be:"<<population_latter<<endl;
}