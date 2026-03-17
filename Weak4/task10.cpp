#include<iostream>
using namespace std;
main(){
    while(true){
        int choice,n1,n2;
        cout<<"----simple calculater----"<<endl;
        cout<<"1.addition"<<endl;
        cout<<"2.subtraction"<<endl;
        cout<<"3.multiplication"<<endl;
        cout<<"4.division"<<endl;
        cout<<"5.exit"<<endl;
        cout<<"enter your choice (1-5)"<<endl;
        cin>>choice;
        cout<<"enter 1st number"<<endl;
        cin>>n1;
        cout<<"enter 2nd number"<<endl;
        cin>>n2;
  
        if(choice ==1){
            cout<<n1+n2<<endl;
        }else if(choice ==2){
            cout<<n1-n2<<endl;
        }else if(choice ==3){
            cout<<n1*n2<<endl;
        }else if(choice ==4){
            cout<<n1/n2<<endl;
        }else if(choice ==5){
            cout<<"exit"<<endl;
        }else{
            cout<<"invalid choice!"<<endl;
        }
        }

    }
