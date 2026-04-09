#include<iostream>
using namespace std;
main(){
    cout<<"enter lenghth of f.series :";
    int length;
    cin>>length;
    int sum=0;
    for(int i=0; i<=length; i++)
    {
        for(int j=0; j>=i; j++){
        sum=sum+j;
        }
    }
}