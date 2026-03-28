#include<iostream>
using namespace std;
main(){
    string word;
    char letter;
    bool isfound=false;
    for(int x=0; x !='\0'; x++)
    {
        if(word[x] == letter)
        {
            isfound = true;
            break;
        }
    }
    return isfound;
}