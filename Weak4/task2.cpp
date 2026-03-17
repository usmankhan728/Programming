#include<iostream>
using namespace std;
main(){
    int n1=0,n2=1,next,no;
    cout<<"enter the length of F.series:"<<endl;
    cin>>no;
    for(int i=0; i<no; i++){
    cout<<n1;
        if(i < no){
            cout<<",";
        
        next=n1+n2;
        n1=n2;
        n2=next;
    }

}
}