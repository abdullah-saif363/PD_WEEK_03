#include <iostream>
using namespace std;
main(){
	int number,width,height,total_walls;
	cout<<"Enter the number of square meters you can paint: ";
	cin>> number ;
	cout<<"Enter the width of single wall in meters: ";
	cin>> width ;
	cout<<"Enter the height of single wall in meters: ";
	cin>> height	 ;
	total_walls = number/(width*height);
	cout<<"Number of walls you can paint: "<< total_walls;
}

