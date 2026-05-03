#include<iostream>
using namespace std;

void maxandmin(int arr[],int n,int &maxval,int &minval){
     maxval=arr[0];
     minval=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>maxval){
            maxval=arr[i];
            
        }if(arr[i]<minval){
            minval=arr[i];
        
        }
    }
}


int main(){
    int arr[]={2,4,5,16,7,3};
    int n=6;
    int max1,min1;
    maxandmin(arr,n,max1,min1);
    cout<<"maximum is : "<<max1<<endl;
    cout<<"minimum is : "<<min1<<endl;

}