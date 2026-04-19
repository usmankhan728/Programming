#include<iostream>
using namespace std;
main(){
    string word="apple";
    char letter='p';
    bool isfound=false;
    for(int x=0; x !='\0'; x++)
    {
        if(word[x] == letter)
        {
            isfound = true;
            break;
        }else{
            isfound=false;
        }
    }
     
}