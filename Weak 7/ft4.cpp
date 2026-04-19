#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float distance,degrees,hight;
    float pi = 3.14;
    cout<<"enter the distance from the base of tree : ";
    cin>>distance;
    cout<<"enter the angle in degrees : ";
    cin>>degrees;

    float radian = degrees * (pi/180.0);
    hight = distance * tan(radian);
    cout<<"the hight of the tree is "<<hight<<" feet "<<endl;
    return 0;
}