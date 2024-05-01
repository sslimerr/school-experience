// Find if the number is between 1 and 365

#include <iostream>
using namespace std;

int main(){

	int n;

	cout << "Inserisci il numero" << endl;
	cin >> n;

	if (n > 1 && n < 365)
    	cout << "Il numero è compreso";
	else
        cout << "Il numero non è compreso";
}