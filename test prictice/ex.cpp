#include <iostream>
using namespace std;

void arrayopp(int arr[],int n){
       for(int i=4; i>=0; i--){
        cout<<arr[i]<<" ";
       }
}

int main(){
    int arr[]={9,8,7,6,5};
    int n=5;
    arrayopp(arr,n);
    for(int i=0; i>n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}