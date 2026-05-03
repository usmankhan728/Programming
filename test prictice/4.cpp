#include<iostream>
using namespace std;

int gitsecondlargest(int arr[],int n){
      
      int secondlargest = arr[0];
      int firstlargest = arr[0];
      for(int i=1; i<n; i++){
            if(arr[i] > firstlargest){
                secondlargest = firstlargest;
                firstlargest = arr[i];
                
            }else if(arr[i] > secondlargest && arr[i] != firstlargest ){
                secondlargest = arr[i];
            }
      }
      return secondlargest;



}
int main(){
    int arr[]={3,4,2,5,8,1};
    int n=6;
    cout<<gitsecondlargest(arr,n);
}