#include<iostream>
using namespace std;
string projecttime(int hrs,int days,int worker);
int main(){
    int hrs,days,worker;
    cout<<"enter needed hours : ";cin>>hrs;
    cout<<"enter days : ";cin>>days;
    cout<<"enter workers : ";cin>>worker;
    cout<<projecttime(hrs,days,worker);
}
string projecttime(int hrs,int days,int worker){
    float workingdays = days-(days*0.1);
    int totalhour = (workingdays*8*worker) + (days*2*worker);

    if(totalhour>=hrs){
        return "yes!";
    }else{
        return "not enough time!";
    }

}