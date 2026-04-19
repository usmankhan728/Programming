#include<iostream>
using namespace std;

string check(int num);
int main(){
    cout<<"enter the number u want to check : ";
    int num;
    cin>>num;
    cout<<check(num);
    return 0;
}
string check(int num){
    int sum=0;
    while (num>0){
        sum = sum + (num % 10);
        num = num / 10;
        
    }
    
    cout<<sum;
    if(sum % 2 ==0 ){
        return " evenish";
    }else 
        return " oddish";
}