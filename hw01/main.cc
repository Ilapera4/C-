#include <iostream>

int times(int x, int y){
	return x*y;
}


int main(){
	using namespace std;
	
	int inputnum;
	int mult;
	int ans;
	cout << "Easy Multiplier!" << endl;
	cout << "Pick a number";
	cin >> inputnum;
	cout << "pick a number to multiply by!";
	cin >> mult;
	cout << inputnum << "*" << mult << "=";
	ans = times(inputnum, mult);
	cout << ans;
	
	return ans;
}