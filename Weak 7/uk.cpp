#include <iostream>
using namespace std;
int x=10;
void myfunction()
{
    cout<<"the vale of x = "<<x<<endl;
}
main()
{
     myfunction();
     int x=30;
     cout<<"the value of x = "<<x<<endl;
     myfunction();  
}