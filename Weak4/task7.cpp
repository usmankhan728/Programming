#include<iostream>
using namespace std;
main(){
    int n,number;
    float c1=0,c2=0,c3=0,c4=0,c5=0;
    cout<<"enter the count of numer:"<<endl;
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>number;
        if(number<200){
            c1++;
        }else if(number>=200 && number<=399){
            c2++;
        }else if(number>=600 && number<=599){
            c3++;
        }else if(number>=600 && number<=799){
            c4++;
        }else{
            c5++;
        }
    }
    cout<<(c1/n)*100<< "%"<<endl;
    cout<<(c2/n)*100<< "%"<<endl;
    cout<<(c3/n)*100<< "%"<<endl;
    cout<<(c4/n)*100<< "%"<<endl;
    cout<<(c4/n)*100<< "%"<<endl;

}