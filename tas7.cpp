#include <iostream>
using namespace std;
main(){
	float adult_price ,child_price, adults_number, children_number ,charity_percentage, generated_amount, charity_donation,remaining_amount;
	string movie_name,movie;
	cout<<"Enter the movie name: ";
	cin>>movie_name;
	cout<<"Enter the adult ticket price:$ ";
	cin>>adult_price;
	cout<<"Enter the child ticket price:$ ";
	cin>>child_price;
	cout<<"Enter the number of adult tickets sold: ";
	cin>>adults_number;
	cout<<"Enter the number of child tickets sold: ";
	cin>>children_number;
	cout<<"Enter the percentage of the amount donated to the charity: ";
	cin>>charity_percentage;
	movie = movie_name;
	cout<<"Movie: "<< movie <<endl;;
	generated_amount = adults_number*adult_price+ children_number*child_price ;
	cout<<"Total amount generated from ticket sales:$ "<<generated_amount << endl;
	charity_donation= generated_amount/10 ;
	cout<<"Donation to charity : "<< charity_donation << endl;
	remaining_amount = generated_amount-dc;
	cout<<"Remaining amount after donation:$ "<<remaining_amount;
}