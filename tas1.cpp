#include <iostream>
using namespace std;
main(){
	int sides , total_angles;
	cout<<" Enter the number of sides of polygon: ";
	cin>> sides ;
	 total_angles = ( sides - 2 )*180;
	cout<<"total internal angles is:   " << total_angles ;
}
