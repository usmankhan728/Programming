#include<iostream>
using namespace std;

void reverseingroup(int arr[],int n,int k){
         for(int i=0; i<n;i+=k){
            int left = i;
            int right = arr[i+k];
            while(left<right){
                swap(arr[left++],arr[right--]);
            }
            
         }
}

int main(){
      int arr[]={1,2,3,4,5,6,7};
      int n=7;
      int k=3;
      reverseingroup(arr,n,k);
      for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
      }
}

