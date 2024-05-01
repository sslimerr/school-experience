// Outputs if the number you chose is odd or even

#include <iostream>
using namespace std;

int main(){

	int f;

	cin >> f; // leggi il primo numero

	while(f > 2)
		f = f - 2;

	if (f == 1)
		cout << "Dispari";
	else
		cout << "Pari";
}
