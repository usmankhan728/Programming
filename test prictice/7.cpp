#include<iostream>
using namespace std;

int reversearray(int arr[],int n){
    for(int i=0; i<n/2; i++){
        swap(arr[i],arr[n-1-i]);
    }
    
    
}

int main (){
    int arr[]={2,4,1,3,5,8,9};
    int n=5;
    reversearray(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}