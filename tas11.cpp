#include <iostream>
using namespace std;
main(){
	int age,numbers,average;
	cout<<"Enter the person's age: ";
	cin>> age;
	cout<<"Enter the number of times they 've moved: ";
	cin>> numbers;
	average = age/(numbers+1);
	cout<<"Average number of years lived in same house: "<<average;
}