#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"enter number of flights :";
    cin>>n;
    int number[100];
    string dist[100];
    int seat[100];
    for(int x=0; x<n; x++)
    {
       cout<<"enter flight # of "<<x+1;
       cin>>number[x];
       cout<<"enter distination of "<<number[x] ;
       cin>>dist[x];
       cout<<"enter seat avalible in "<<number[x] ;
       cin>>seat[x];
    }
    cout<<"---flight info---"<<endl;
    for(int x=0; x<n; x++)
    {
        cout<<"flight "<<number[x] <<" to "<<dist[x] <<" has "<< seat[x]<<" avalible."<<endl;
        
            }
}