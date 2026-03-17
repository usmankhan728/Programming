#include<iostream>
using namespace std;
main(){
    string username,password;
    string studentname;
    string coursename;
    int studentage;
    int choice;

for(int i=1; i<=3; i++){
     cout<<"enter user name:"<<endl;
     cin>>username;
     cout<<"enter password:"<<endl;
     cin>>password;
    if(username =="admin" && password == "1234")
    {
        cout<<"login successfully";
        break;
    }
    else
    {
        cout<<"wrong login"<<endl;
    }
    if(i ==3 && !(username == "admin" && password =="1234"))
    {
        cout<<"too many attempt,program end."<<endl;
        return 0;
    }
}
for(int i=1; i<=5; i++)
{
    cout<<endl<<"----universuty managment system-----"<<endl;
    cout<<"1.add student";
    cout<<"2.view student";
    cout<<"3.add course";
    cout<<"4.exit"<<endl;
    cout<<"enter choice";
    cin>>choice;
    if (choice ==1)
    {
        cout<<"enter student name:"<<endl;
        cin>>studentname;
        cout<<"enter studnet age:"<<endl;
        cin>>studentage;
        cout<<"student added successfully"<<endl;
    }
    else if(choice ==2)
    {
        if(studentname != "")
        {
            cout<<"student name"<<studentname<<endl;
            cout<<"student age"<<studentage<<endl;
        }
        else
        {
            cout<<"no student record found"<<endl;
        }
    }
    else if(choice ==3)
    cout<<"enter course name:"<<endl;
    cin>>coursename;
    cout<<"course added"<<coursename<<endl;
    }
    if(choice ==4)
    {
        cout<<"program exit"<<endl;
    }
    else
    {
        cout<<"invalid choice"<<endl;
    }
    }

