#include<iostream>
using namespace std;

main(){
int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15;
int add_result,mult_result,sub_result,final_result;

cout<<"enter 1st number:"<<endl;
cin>>n1;
cout<<"enter 2nd number:"<<endl;
cin>>n2;
cout<<"enter 3rd number:"<<endl;
cin>>n3;
cout<<"enter 4th number:"<<endl;
cin>>n4;
cout<<"enter 5th number:"<<endl;
cin>>n5;
cout<<"enter 6th number:"<<endl;
cin>>n6;
cout<<"enter 7th number:"<<endl;
cin>>n7;
cout<<"enter 8th number:"<<endl;
cin>>n8;
cout<<"enter 9th number:"<<endl;
cin>>n9;
cout<<"enter 10th number:"<<endl;
cin>>n10;
cout<<"enter 11th number:"<<endl;
cin>>n11;
cout<<"enter 12th number:"<<endl;
cin>>n12;
cout<<"enter 13th number:"<<endl;
cin>>n13;
cout<<"enter 14th number:"<<endl;
cin>>n14;
cout<<"enter 15th number:"<<endl;
cin>>n15;

add_result = n1 + n2 + n3 + n4 + n5;
mult_result = n6 * n7 * n8 * n9 * n10;
sub_result = n11 - n12 - n13 - n14 - n15;
final_result = (add_result + mult_result) - sub_result;

cout<<"your final result is:"<<final_result<<endl;
}