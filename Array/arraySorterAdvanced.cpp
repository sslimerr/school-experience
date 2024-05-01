// Sorts two arrays, adds them together and sorts the new one

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

	int x, y; // lunghezza vettori
	int z; // random
	int temp; // variabile temporanea
	int j; // contatore

	cout << "Inserisci la lunghezza del primo vettore:" << endl;
	cin >> x;
	cout << "Inserisci la lunghezza del secondo vettore:" << endl;
	cin >> y;

	int v1[x], v2[y], r[x+y];

	srand(time(0));

	cout << "Primo vettore:" << endl;
	for(int i = 0; i < x; i++){
		z = rand() % 10; // genera un numero casuale da 0 a 9
		v1[i] = z;
		cout << v1[i] << " ";
	}
	cout << endl;

	cout << "Secondo vettore:" << endl;
	for(int i = 0; i < y; i++){
		z = rand() % 10; // genera un numero casuale da 0 a 9
		v2[i] = z;
		cout << v2[i] << " ";
	}
	cout << endl << endl;

	cout << "Primo vettore ordinato:" << endl;
	for(int i = 0; i < x; i++) // ordina il primo vettore
		for(int j = 0; j < x; j++)
			if(v1[i] < v1[j]){
				temp = v1[i];
				v1[i] = v1[j];
				v1[j] = temp;
			}
	for(int i = 0; i < x; i++) // stampa il primo vettore
		cout << v1[i] << " ";
	cout << endl;

	cout << "Secondo vettore ordinato:" << endl;
	for(int i = 0; i < y; i++) // ordina il secondo vettore
		for(int j = 0; j < y; j++)
			if(v2[i] < v2[j]){
				temp = v2[i];
				v2[i] = v2[j];
				v2[j] = temp;
			}
	for(int i = 0; i < y; i++) // stampa il secondo vettore
		cout << v2[i] << " ";
	cout << endl << endl;

	for(int i = 0; i < x; i++) // copia v1 in r
		r[i] = v1[i];
	for(int i = x; i < x+y; i++){ // aggiunge v2 in r
		r[i] = v2[j];
		j++;
	}

	cout << "Somma dei vettori:" << endl;
	for(int i = 0; i < x+y; i++) // stampa la somma
		cout << r[i] << " ";
	cout << endl;

	cout << "Somma dei vettori ordinata:" << endl;
	for(int i = 0; i < x+y; i++) // ordina il vettore che contiene la somma
		for(j = 0; j < x+y; j++)
			if(r[i] < r[j]){
				temp = r[i];
				r[i] = r[j];
				r[j] = temp;
			}
	for(int i = 0; i < x+y; i++) // stampa il vettore
		cout << r[i] << " ";

}
