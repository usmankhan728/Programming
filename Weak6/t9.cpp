#include<iostream>
using namespace std;
main(){
    cout<<"how many number u want to enter: ";
    int num;
    cin>>num;
    int count[num];
    for(int x=0; x<num; x++)
    {
        cout<<"enter "<<x+1<<" number ";
        cin>>count[x];
    }
    int max=count[0];
    int min=count[0];
    for(int i=0; i<num; i++)
    {
        if(count[i] > max){
            max = count[i];
        }if(count[i] < min){
            min = count[i];
        }
        
    }
    cout<<"largest number: "<<max<<endl;
    cout<<"smallest number: "<<min<<endl;
}