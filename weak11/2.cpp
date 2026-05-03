#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int *ptr = arr;

    for(int i=0; i<5; i++){
        cout<<"element "<< i << " : " << *(ptr + i)<<endl;
        cout<<ptr+i<<endl;
    }
    
}   