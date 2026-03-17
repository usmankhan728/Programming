#include<iostream>
using namespace std;
main(){
    int num;
    int dig;
    int freq;

    cout<<"enter the number:"<<endl;
    cin>>num;
    cout<<"enter the digit to check:"<<endl;
    cin>>dig;
    for(int i=num; i>0;i/=10){
        int lastdigit=i%10;
        if(lastdigit==dig){
            freq++;
        }
    }
cout<<"freq of "<<dig<<" in "<<num<<" is "<<freq<<endl;
return 0;
}