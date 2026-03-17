#include<iostream>
using namespace std;
main(){
    while(true){
        int choice;
        cout<<"-----resturant managment system------"<<endl;
        cout<<"1.view menu"<<endl;
        cout<<"2.view order"<<endl;
        cout<<"3.generate bill"<<endl;
        cout<<"4.contact staff"<<endl;
        cout<<"5.exit"<<endl;
        cout<<"enter your choice (1-5): "<<endl;
        cin>>choice;
        if(choice ==1){
            cout<<"i m showing our  menu!"<<endl;
        }else if(choice ==2){
            cout<<"here is your order!"<<endl;
        }else if (choice ==3){
            cout<<"i m generating your bill!"<<endl;
        }else if(choice ==4){
            cout<<"i m providing u the staff contact!"<<endl;
        }else if(choice ==5){
            cout<<"exit"<<endl;
        }else{
            cout<<"invalid choice!"<<endl;
        }

        }
        }