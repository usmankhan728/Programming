#include<iostream>
using namespace std;
main(){
    cout<<"how many name u want to enter: ";
    int x;
    cin>>x;
    string name[x];
    for(int i=0; i<x; i++)
    {
        cout<<"enter "<<i+1<<" name"<<endl;
        cin>>name[0];
    }
    cout<<"your list is: "<<endl;
    
    for(int i=0; i<x; i++)
    {
        cout<<name[0]<<endl;
    }
}