#include<iostream>
#include<string>
#include<iomanip>
#include<sstream>
using namespace std;

string pyramidV(float l,float w,float h,string unit){
    float VinM=(l*w*h)/3.0;
    float finalV;
    if(unit == "meter"){
         finalV=VinM;
    }
    else if(unit =="centimeter"){
        finalV=VinM*10000000000.0;
    }
    else if(unit =="millimeter"){
         finalV=VinM*1000000000.0;
    }
    else if(unit =="kilometer"){
         finalV=VinM/1000000000.0;
    }
    else{
        return "invalid unit";
    }
    stringstream ss;
    ss<<fixed<<setprecision(3)<<finalV<<"cubic"<<unit<<endl;
    return "finalV";
    
    }
   int main(){
         float l,w,h;
         string u;
         cout<<"enter the length ,width and hight in meter : "<<endl;
         cin>>l>>w>>h;
         cout<<"enter ur desire out put in(mm,km,m,cm) : "  <<endl;
         cin>>u;
         cout<<pyramidV(l,w,h,u);
         return 0;
   }




