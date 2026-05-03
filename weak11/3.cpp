#include<iostream>
using namespace std;

int main(){
    int y=20;
    int &ref = y;
    cout<<"orignal value of y : "<<y<<endl;
    ref =30;
    cout<<"modified value of : "<<y<<endl;
    return 0;
    
}