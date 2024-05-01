// Factorial calculator

#include <iostream>
using namespace std;

int main(){

	int fatt, f;

	cin >> f;
	fatt = f;

	while(f > 2){
		f = f - 1;
		fatt = fatt * f;
	}

	cout << fatt;

}