#include <iostream>
using namespace std;

void timeTravel(int hrs,int mins);
int main(){
    int hrs,mins;
    cout<<"enter hour : ";cin>>hrs;
    cout<<"enter mins : ";cin>>mins;
    timeTravel(hrs,mins);
    return 0;
}
void timeTravel(int hrs,int mins){
    mins = mins + 15;
    if(mins >= 60){
        mins = mins - 60;
        hrs = hrs + 1;
    }if (hrs>=24){
        hrs=0;
    }
    cout<<"new time : "<<hrs<< ":" <<mins<<endl;
}