#include<iostream>
using namespace std;
main(){
    string shape;
    cout<<"enter the shape:";
    cin>>shape;
    if(shape == "squre"){
        double s;
        cin>>s;
        cout<<s*s<<endl;
    }
    if(shape == "rectangle"){
        double l,w;
        cin>>l>>w;
        cout<<l*w<<endl;
    }
    if(shape == "triangle"){
        double b,h;
        cin>>b>>h;
        cout<<0.5*b*h<<endl;
    }
    if(shape == "circle"){
        double r;
        cin>>r;
        cout<<3.14*r*r<<endl;
    
    }
    }