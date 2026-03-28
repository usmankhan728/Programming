#include<iostream>
using namespace std;
main(){
   int number[4];
   int sum=0;
   cout<<"enter,how many number u want enter:"<<endl;
   int num;
   cin>>num;
   for(int x=0; x<num; x++)
   {
    cout<<"enter "<<x+1<<" number:"<<endl;
    cin>>number[x];
    sum=sum+number[x];
   }
   
   cout<<"sum of number is: "<<sum<<endl;
   
}