#include<iostream>
using namespace std;

bool symmetric(int num);
main(){
    int num;
    cout<<"enter ur three digit number : ";cin>>num;
    if(symmetric(num)){
        cout<<"true";
    }else{cout<<"false";}

}
bool symmetric(int num){
        int orignal = num;
        int reversed = 0;
        while(num>0){
        reversed = (reversed * 10) + (num % 10);
        num = num / 10;
    }
        return (orignal == reversed);
}
       