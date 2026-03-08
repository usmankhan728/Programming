#include<iostream>
using namespace std;
main(){
    int holidays;
    cout << "Enter number of holidays: ";
    cin >> holidays;

    int totalDays = 365;
    int norm = 30000;
    int workingDays = totalDays - holidays;
    workingDays * 63 + holidays * 127;
    int totalplaytime = (workingDays * 63) + (holidays * 127);

    int difference = norm - totalplaytime;

    if (totalplaytime <= norm) {
        cout << "Tom sleeps well" << endl;
        int hours = difference / 60;
        int minutes = difference % 60;
        cout << hours << " hours and " << minutes << " minutes less for play" << endl;}
     else {
        cout << "Tom will run away" << endl;}
    
        int positiveDiff = totalplaytime - norm; 
        int hours = positiveDiff / 60;
        int minutes = positiveDiff % 60;
        cout << hours << " hours and " << minutes << " minutes for play" << endl;
    }

