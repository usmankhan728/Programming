#include<iostream>
using namespace std;
main(){
    cout<<"multipication table of 24 is :"<<endl;
    int multiple;
    for (int num = 1; num<=10; num = num+1)
    {
        multiple=24*num;
        cout<<24<<"*"<<num<<"="<<multiple<<endl;
    }

    cout<<"multipliaction table of 50 is :"<<endl;
    for(int num=1; num<=10; num=num+1)
    {
        multiple=50*num;
        cout<<50<<"*"<<num<<"="<<multiple<<endl;
    }
}