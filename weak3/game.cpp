#include<iostream>
using namespace std;

main(){
float impostercount;
float playercount;
int chance;

cout<<"enter imposter count:"<<endl;
cin>>impostercount;
cout<<"enter player count:"<<endl;
cin>>playercount;

chance = (impostercount / playercount) * 100;
cout<<"chance of imposter is:"<<chance<<" %" <<endl;
}