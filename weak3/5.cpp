#include<iostream>
using namespace std;

main(){
string name;
int mat_score , inter_score , ecat_score;
float agg;

cout<<"enter name:"<<endl;
cin>>name;
cout<<"enter matric score (out of 1100):"<<endl;
cin>>mat_score;
cout<<"enter intermediate score (out of 550):"<<endl;
cin>>inter_score;
cout<<"enter ecat score (out of 400):"<<endl;
cin>>ecat_score;

agg = [(50.0/100.0)*ecat_score] + [(40.0/100.0)*inter_score] + [(10.0/100.0)*mat_score];
cout<<"your aggregate is:"<< agg << "%" <<endl;
}