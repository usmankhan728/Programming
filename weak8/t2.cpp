#include<iostream>
using namespace std;

void showroom(int shop[][5],int color);
   const int car=5;
   const  int color=5;

int main(){
   
   int shop[5][5]={{2,4,6,8,10},
                   {1,3,5,7,9,},
                   {4,6,8,10,12},
                   {1,2,3,4,5},
                   {4,5,6,7,8,}};
                  cout<<"the balck cars are : " <<shop[2][2]<<endl;
                  cout<<"the red color car are "<<shop[1][2]<<endl;
                  cout<<"the nissan cars are "<<shop[2][4]<<endl;
                  cout<<shop[car][color]<<"\t"<<endl;
                  showroom(shop,color);
}
void showroom(int car[][5],int color){
              showroom(car,color);
              for(int row=0; row<5;row++){
                for(int col=0; col<5;col++){
                    cout<<car[row][col];
                }
              }
            }
