#include<iostream>
using namespace std;


void sumofnum(int arr[],int n,int &sumofeven,int &sumofodd){
     
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            int sumofeven =sumofeven + arr[i];
        }else{
            int sumofodd =sumofodd + arr[i];
        }
    }
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;
    int sumofodd,sumofeven;
    sumofnum(arr,n,sumofodd,sumofeven);
    cout<<"sum of odd is : "<<sumofeven<<endl;
    cout<<"sumofeven is : "<<sumofodd<<endl;
    return 0;
}