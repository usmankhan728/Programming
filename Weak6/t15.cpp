#include<iostream>
using namespace std;
main(){
    cout<<"-----wellcome to library system-----"<<endl;
    
    cout<<"how many books data u want to enter: ";
    int n;
    cin>>n;
    string book[100];
    string note[100];
    for(int i=0; i<n; i++)
    {
        cout<<"add book " <<i+1 << ": ";
        cin>>book[i];
        cout<<"your added book is : "<< book[i] <<endl;
        cout<<"borrow book " <<i+1 <<" : ";
        cin>>note[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<"your added book is : " <<book[i] <<endl;
        cout<<"you borrowed "<< note[i] <<endl;
    }
}