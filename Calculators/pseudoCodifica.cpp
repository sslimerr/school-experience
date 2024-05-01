// "Translates" italian into code

/*
scrivi "inserisci due numeri"
leggi(f) //leggi il primo numero 
leggi(g) //leggi il secondo numero 
risultato ? 0 //inizializzo il risultato 
Finchè f > 0 esegui 
{
risultato ? risultato + g //aggiungi g per f volte
 f ? f - 1 
}
stampa(risultato)
*/

#include <iostream>
using namespace std;

int main(){
	
	int f, g, risultato;
	
	cout << "inserisci due numeri";
	cin >> f; //leggi il primo numero
	cin >> g; //leggi il secondo numero
	
	risultato = 0; //inizializzo il risultato
	
	while (f > 0){

		risultato = risultato + g; //aggiungi g per f volte
		f = f - 1;
	}
	cout << risultato;
}
