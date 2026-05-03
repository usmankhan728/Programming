#include<iostream>
using namespace std;

void reversearray(int arr[],int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        int temp =arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    }
    int main(){
        int arr[]={2,3,4,5,6,7,8};
        int n=7;
        reversearray(arr,n);
        cout<<"reverse array is = ";
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
    }

