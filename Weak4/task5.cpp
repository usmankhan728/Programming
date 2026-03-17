#include<iostream>
using namespace std;
main(){
    int num,digit;
    int sum=0;
    cout<<"enter the number:"<<endl;
    cin>>num;
    if(num<0){
        num=-num;
    }
    while(num>0)
    {
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
       cout<<"sum of the digit id: "<<sum<<endl;
       return 0;
}