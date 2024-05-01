// Simple array sorter

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	
	int z = 0; // contatore
	int y; // random
	int x; // grandezza del vettore
	int temp; // variabile temporanea
	
	cout << "Inserisci la lunghezza del vettore"<<endl;
	cin >> x;
	
	int v[x];
	
	srand(time(0));
		
	cout<<"Stampa vettore:"<<endl;
	for(int i = 0; i < x; i++){
		y = rand() % 10; // genera un numero casuale da 0 a 9
		v[i] = y;
		cout<<v[i]<<" ";
	}
	cout << endl;
	
	cout << "Vettore ordinato:" << endl;
	for(int i = 0; i < x; i++)
		for(int j = 0; j < x; j++)
			if(v[i] < v[j]){
				temp = v[i];
				v[i] = v[j];
				v[j] = temp;
				z++;
			}
	for(int i = 0; i < x; i++)
		cout << v[i] << " ";
	cout << endl;
	
	cout << "L'ordinamento ha fatto " << z << " passaggi.";
}
