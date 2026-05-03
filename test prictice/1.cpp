#include<iostream>
using namespace std;

int arraymax(int arr[],int n){
    int max=arr[0];
         for(int i=0; i<n; i++){
            if(arr[i]>max){
                max=arr[i];
            }
         }
         return max;
}


int main(){
    int arr[]={2,4,3,5,9,1};
    int n=6;
    arraymax(arr,n);
    cout<<"maximus is "<<arraymax(arr,n);


    return 0;
}