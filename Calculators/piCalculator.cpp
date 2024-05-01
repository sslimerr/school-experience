// Calculates an estimate of π using the method of approximations

#include <iostream>
#include <cmath>
using namespace std;

int main(void){

	unsigned int c, n;
	long double s, x;
	
	cout << "Inserisci n" << endl;
	cin >> n;
	
	c = 1;
	x = sqrt(2);

	while (c < n){
		c = c + 1;
		x = sqrt(2 - sqrt(4 - x * x));
	}
	s = pow(2, n) * x;
	
	cout << "Pi => " << s << endl;
	
}
