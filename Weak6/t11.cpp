#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"enter number of cotomer: ";
    cin>>n;
    string costomer[n];
    cout<<"enter the name "<<n<< "costomer: "<<endl;
    for(int i=0; i<n; i++)
    {
         cin>>costomer[i];
    }
    char letter;
    cout<<"enter the charecter u want to check: "<<endl;
    cin>>letter;
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(costomer[i][0] ==letter){
            count++;
        }
    }
    cout<<"total name starting "<<letter<<" :"<<count<<endl;
}