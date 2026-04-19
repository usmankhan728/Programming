#include <iostream>
using namespace std;

string caseCheck(char ch);
int main(){
    char abc;
    cout<<"enter ur letter u want to check : ";cin>>abc;
    cout<<caseCheck(abc);
}
string caseCheck(char ch){
    if(ch>='A' && ch<='Z'){
        return "capital letter";
    }else{
        return "small case letter";
    }
}