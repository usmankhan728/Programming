#include<iostream>
using namespace std;

main(){
int length_in_minute;
int frames_per_second;
int total_frames;
cout<<"enter length in minute:"<<endl;
cin>>length_in_minute;
cout<<"enter frames per second:"<<endl;
cin>>frames_per_second;
total_frames = length_in_minute * 60 * frames_per_second;
cout<<"total number of frames is:"<<total_frames<<endl;
}