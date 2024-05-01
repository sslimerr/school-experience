// Simple boat ticket price calculator simulation

#include <iostream>
using namespace std;

int main(){
	
	int l, t, x;
	
	do{
		cout << "Inserisci la lunghezza dell'imbarcazione" << endl;
		cin >> l;
		cout << "Inserisci il tempo in giorni di stazionamento in banchina" << endl;
		cin >> t;
		cout << "Scrivi 1 per la tariffa invernale e 2 per la tariffa estiva" << endl;
		cin >> x;
	}
	while (l < 1 || t < 1);
	
	switch(x) {
		case 1:
			cout << "La tariffa invernale e' di " << t*12.10;
			break;
		case 2:
			cout << "La tariffa estiva e' di " << t*28.23;
			break;
		default:
			cout << "Puoi inserire solo 1 o 2, riprova";
	}

}
