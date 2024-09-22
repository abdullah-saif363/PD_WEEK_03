#include <iostream>
using namespace std;
main(){
	float bag_size,bag_cost,bag_area,fertilizer_cost,fertilizing_cost;
	cout<<"Enter the size of the fertilizer bag in pounds: ";
	cin>> bag_size;
	cout<<"Enter the cost of bag:$ ";
	cin>> bag_cost;
	cout<<"Enter the area in square foot that can be covered by the bag: ";
	cin>> bag_area;
	fertilizer_cost = bag_cost/bag_size;
	cout<<"cost of fertilizer per pound: "<<fertilizer_cost <<endl ;
	fertilizing_cost= bag_cost/bag_area;
	cout<<"the cost of fertilizing the area per square foot: "<<fertilizing_cost;
}
