#include<iostream>
using namespace std;
main(){
    int choice;
    string name;
    while(true){
    
    cout<<"-----library system-----"<<endl;
    cout<<"1.add book"<<endl;
    cout<<"2.view book"<<endl;
    cout<<"3.borrow book"<<endl;
    cout<<"4.exit"<<endl;
    cout<<"enter your choice:"<<endl;
    cin>>choice;
    if(choice ==1){
        cout<<"enter the book u want to add"<<endl;
        cin>>name;
        cout<<"u added "<<name<<endl;
    }else if(choice ==2){
        cout<<"ur added book are....."<<endl;
    }else if(choice ==3){
        cout<<"u can borrow book"<<endl;
    }else if(choice ==4){
        cout<<"exiting library system"<<endl;
        
    }else{
        cout<<"invalid opeartion"<<endl;
        break;
    } 
}
return 0;
}