#include<iostream>
using namespace std;

string namesearch(string arr[],int n,string name){
    
    for(int i=0; i<n; i++){
         if(arr[i]==name){
            return "found";
         }
    }
    return "not found";
}

int main(){
    string arr[]={"ali","wali","zaheer","usman","adil"};
    int n=5;
    string name="usman";
    string result = namesearch(arr,n,name);
    cout<<result<<endl;
}