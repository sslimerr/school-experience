// Finds the number you're looking for inside of a matrix

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	
	int x; // grandezza del vettore
	int y; // random
	int z; // ricerca
	
	int v[6][5];
	
	srand(time(0)); // seed basato sul tempo
		
	cout << "Stampa vettore:" << endl;
	for(int i = 0; i < 6; i++)
		for(int j = 0; j < 5; j++){
			y = rand() % 10; // genera un numero casuale da 0 a 9
			v[i][j] = y;
			cout << v[i][j] << " ";
			if(j % 5 == 0)
				cout << endl;
		}
	cout << endl;
	
	cout << "Che numero vuoi cercare?" << endl;
	cin >> z;
	
	for(int i = 0; i < 6; i++)
		for(int j = 0; j < 5; j++)
			if(v[i][j] == z)
				cout << "Il numero si trova nella posizione (" << i << "," << j << ")";
			else
				cout << "Il numero non è stato trovato.";
	
}
