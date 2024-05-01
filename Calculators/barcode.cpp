// Barcode calculation

#include <iostream>
using namespace std;

int main(){
	
	int v[13];
	int x = 0, i;
	
	cout << "Inserisci un codice a barre:" << endl;
	
	for(i = 0; i < 12; i++) // 2 4 1 2 3 4 5 6 7 8 9 0    2 3 4 5 6 7 8 9 0 1 2
		cin >> v[i];
	
	for(i = 0; i < 12; i++)
		if (i % 2 == 0)
			v[i] * 1;
		else
			v[i] * 3;
	
	for(i = 0; i < 12; i++)
		x = x + v[i];
	
	x = x % 10;
	
	cout << "Il calcolo risulta: " << x << endl;
	
}
