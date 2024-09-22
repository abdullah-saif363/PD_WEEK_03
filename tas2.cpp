#include<iostream>
using namespace std;
int main(){
	int minutes,frames_per_second,total_frames ;
	cout<<"Enter number of Minutes:  ";
	cin>> minutes;
	cout<<"Enter number of Frames per second: ";
	cin>> frames_per_second;
	total_frames = minutes*60*frames_per_second;
	cout<<"Total Number of Frames: " << total_frames;
}