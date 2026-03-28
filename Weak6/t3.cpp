#include<iostream>
using namespace std;
main(){
    int number[5];
    for(int x=0; x<5; x++)
    {
      cout<<"enter number:"<<endl;
      cin>>number[x];
    }
    cout<<"the 1st element of array is:"<<number[0]<<endl;
    cout<<"the last elemnt of the array is:"<<number[4]<<endl;
}