#include<iostream>
using namespace std;

void pool(int v,int p1,int p2,double h);

int main(){
    int v,p1,p2;
    double h;
    cout<<"enter volume ,pipe1, pipe2, and hours : ";
    cin>>v>>p1>>p2>>h;
    pool(v,p1,p2,h);
    return 0;
}
void pool(int v,int p1, int p2,double h){
    double totalwater = (p1 +p2)*h;
    if(totalwater <=v){
        cout<<"pool is "<<(totalwater / v) *100 << "% full";
    }else{
        cout<<"overflow: " <<totalwater - v <<"letters.";
    }
}