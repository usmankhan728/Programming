#include<iostream>
using namespace std;

int salery(float base,int score,int exp);
int main(){
    float base;
    int score,exp;
    cout<<"enter base,score and experince :";
    cin>>base>>score>>exp;
    cout<<"final sallery is :"<<salery(base,score,exp)<<endl;
}
int salery(float base,int score,int exp){
     float bonus=0;
     if(score>90){
          bonus=0.2;
     }else if(score>=75){
          bonus=0.1;
     }else{
          bonus=0.05;
     }if(exp>=5){
        bonus = bonus +0.05;
     }
     return base + (base * bonus);
}