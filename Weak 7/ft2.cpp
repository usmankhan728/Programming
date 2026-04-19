#include <iostream> 
#include<cmath>
using namespace std;

int main(){
    float base,exponent;
    cout<<"enter ur base digit : ";
    cin>>base;
    cout<<"enter the exponent u want : ";
    cin>>exponent;
    cout<<base<< " to the power "<<exponent<< " is : "<<pow(base,exponent)<<endl;
    return 0;
}