#include<iostream>
using namespace std;
main(){
    
    cout<<"how many number u want to enter: "<<endl;
    int num;
    cin>>num;
    int count[num];
    for(int x=0; x<num; x++)
    {
        cout<<"enter "<<x+1<<" number:"<<endl;
        cin>>count[0];
        if(count[0]=count[0]%2){
            cout<<"odd"<<endl;
        }else{
            cout<<"even"<<endl;
        }
    }
    
}