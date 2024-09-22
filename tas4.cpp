#include <iostream>
using namespace std;
main(){
	float imposter_count,player_count;
	int cp;
	cout<<"Enter imposter count: ";
	cin>>imposter_count ;
	cout<<"Enter Player count: ";
	cin>> player_count;
	imposter_chance= 100*(imposter_count/player_count);
	cout <<"Chance of being an imposter:  "  <<imposter_chance <<"%";
}










