#include<iostream>
using namespace std;
main(){
    cout<<"enter number of product: "<<endl;
    int n;
    cin>>n;

    string name[100];
    float price[100];
    int quantity[100];
    for(int x=0; x<n; x++)
    {
        cout<<"enter name of product "<<x+1 <<":"<<endl;
        cin>>name[x];
        cout<<"enter price of "<<name[x]<< "in dollar "<<endl;
        cin>>price[x];
        cout<<"enter quantity of "<<name[x]<<endl;
        cin>>quantity[x];
    }
      cout<<"---product report---"<<endl;
      for(int x=0; x<n; x++)
      {
        cout<<name[x]<<" : "<<price[x]<<" , total value = "<<price[x]*quantity[x]<<endl;
      }
}