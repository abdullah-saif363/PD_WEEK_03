#include <iostream>
using namespace std;
main(){
	int num ,sum;
	cout<<"Enter your 5 digit integer: ";
	cin>>num;
	sum = (num%10)+((num/10)%10)+((num/100)%10)+((num/1000)%10)+((num/10000)%10);
	cout<<"sum of individual numbers: "<< sum;
}