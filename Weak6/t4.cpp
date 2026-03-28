#include<iostream>
using namespace std;
main(){
    cout<<"enter how many number u want to enter:"<<endl;
    int count;
    cin>>count;

     int number[count];
    for(int x=0; x<count; x++ )
    {
        cout<<"enter number:"<<endl;
        cin>>number[x];
    }
    for(int j=0; j<count; j++)
    {
       cout<<number[j]<<"is the "<< j+1 <<"element"<<endl; 
    }
}