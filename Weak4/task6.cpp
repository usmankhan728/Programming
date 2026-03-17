#include<iostream>
using namespace std;
main(){
    int gcd=1,lcm;
    cout<<"enter your 1st number:"<<endl;
    int n1;
    cin>>n1;
    cout<<"enter your 2nd number:"<<endl;
    int n2;
    cin>>n2;
          for(int i=n1; i<=n1 && i<=n2; i++)
          {
            if(n1%i ==0 && n2%i ==0){
                gcd=i;
            }
          }
          lcm=(n1*n2) / gcd;
          cout<<"GCD: " <<gcd<<endl;
          cout<<"LCM: " <<lcm<<endl;
}