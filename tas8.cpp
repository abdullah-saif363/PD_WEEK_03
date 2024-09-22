#include <iostream>
using namespace std;
main(){
	float vegetable_price,fruit_price,total_vegetables,total_fruit,total_earning;
	cout<<"Enter vegetable price per kilogram (in coins):  ";
	cin>>  vegetable_price;
	cout<<"Enter fruit price per kilogram (in coins):  ";
	cin>> fruit_price;
	cout<<"Enter total kilogram of  vegetables :  ";
	cin>> total_vegetables;
	cout<<"Enter total kilogram of  fruits :  ";
	cin>> total_fruit;
	total_earning = (  vegetable_price*total_vegetables + fruit_price*total_fruit)/1.94;
	cout<<"Total earnings in Rupees:  "<<total_earning;
}


