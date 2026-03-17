#include<iostream>
using namespace std;
main(){
    int num;
    cout<<"enter the number:"<<endl;
    cin>>num;

    for(int i=1; i<=10; i=i+1)
    {
    int multiple;
    multiple=num*i;
    cout<<num<<"x"<< i <<" = "<<multiple<<endl;
    }
}