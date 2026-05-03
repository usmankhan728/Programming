#include<iostream>
using namespace std;

void modifywithpointer(int *p){
    *p=50;
}
void modifywithrefernce(int &r){
    r = 100;
}

int main(){
    int a=10;
    int b=20;

    modifywithpointer(&a);
    modifywithrefernce(b);

    cout<< " value of a after pointer modifiaction "<<a<<endl;
    cout<< " valye of b after refernce modifiaction "<<b<<endl;
    return 0;

}