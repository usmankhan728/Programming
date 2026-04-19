#include <iostream>
using namespace std;

int add(int number1, int number2);

int main()
{
    int number1,number2;
    cout<<"enter number 01:";
    cin>>number1;
    cout<<"enter number02:";
    cin>>number2;
   int felp ;
   felp = add(number1,number2);
   cout << felp;

    return 0;

}

int add(int number1, int number2){

    int result = number1+number2;

    return result ;

}




