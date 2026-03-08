#include<iostream>
using namespace std;

main(){
    string name1,name2,name3;
    int age1,age2,age3;
    cout<<"enter name of 1st broter:"<<endl;
    cin>>name1;
    cout<<"enter name of 2nd brother:"<<endl;
    cin>>name2;
    cout<<"enter name of 3rd brother:"<<endl;
    cin>>name3;
    cout<<"enter age of 1st:"<<endl;
    cin>>age1;
    cout<<"enter age of 2nd:"<<endl;
    cin>>age2;
    cout<<"enter age of 3rd:"<<endl;
    cin>>age3;
    if(age1 < age2 && age1 < age3 ){
        cout<<name1<< "is younger:"<<endl;
    if(age2 < age1 && age2 < age3 ){
        cout<<name1<<" is younger:"<<endl;
        if(age3 < age2 && age3 < age1){
            cout<<name3<<" is younger"<<endl;
        }
        }
    }
    }
    