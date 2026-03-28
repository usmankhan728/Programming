#include<iostream>
using namespace std;
main(){
     int n;
     cout<<"enter number of student: "<<endl;
     cin>>n;
     string student[n];
     for(int i=0; i<n; i++)
     {
        cout<<"enter "<<i+1<<"name"<<endl;
        cin>>student[n];
     }
     for(int i=0; i<n-1; i++)
     {
        for(int j=0; j<n-1; j++)
        {
            if(student[j]>student[j+1]){
                string temp=student[j];
                student[j]=student[j+1];
                student[j+1]=temp;
            }
        }
     }
     cout<<"student in alphabitic order: "<<endl;
     for(int i=0; i<n; i++){
        cout<<student[n]<<endl;
     }

}