#include<iostream>
using namespace std;
int value1=10;
int value2=20;

int sum(){
    value1=40;
    value2=60;
    return value1+value2;
}
main(){
    value2=sum();
    cout<<value1<<" "<<value2;
}