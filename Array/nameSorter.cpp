// Creates a random list of names with their corresponding phone number and sorts them

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#define z 10 // numero di persone nella rubrica
using namespace std;

struct rubrica{
	string nome;
	int num[10];
};

int main(){
	
	int x,y; // random
	int j = 0;
	string temp; // variabile temporanea
	string n[5] = {"Mario", "Guido", "Marco", "Lucio", "Dario"};
	rubrica r[z];
	
	srand((int)time(0));
	y = (rand() % 10); // genera un numero da 0 a 9 per i numeri di telefono
	
	for(int i = 0; i < z; i++) // riempie il vettore di numeri di telefono
		for(int j = 0; j < 10; j++){
			y = (rand() % 10);
			r[i].num[j] = y;
		}
	
	cout << "Numeri nel vettore:" << endl;
	for(int i = 0; i < z; i++) // stampa i numeri di telefono
		for(j = 0; j < 10; j++){
			cout << r[i].num[j];
			if(j == 9)
				cout << endl;
		}
	
	for(int i = 0; i < z; i++){ // riempie il vettore di nomi casuali
		y = (rand() % 5);
		r[i].nome = r[i].nome + n[y];
	}
	
	cout << "Nomi nel vettore:" << endl;
	for(int i = 0; i < z; i++) // stampa i nomi
		cout << r[i].nome << endl;
	
	cout << "Nomi con i numeri di telefono corrispondenti:" << endl;
	for(int i = 0; i < z; i++){  // stampa i nomi e i numeri corrispondenti non in ordine
		cout << r[i].nome << " ";
		for(j = 0; j < 10; j++){
			cout << r[i].num[j];
			if(j == 9)
				cout << endl;
		}
	}
	
	for(int i = 0; i < z; i++)  // ordina i nomi e i numeri corrispondenti
		for(j = 0; j < 10; j++){
			if(r[i].nome < r[j].nome){
			for(int q = 0; j < 10; j++){
				cout << r[j].num[q];
				if(j == 9)
					cout << endl;
			}
			temp = r[i].nome;
			r[i].nome = r[j].nome;
			r[j].nome = temp;
			}
		}
	
	cout << "Nomi con i numeri in ordine alfabetico:" << endl;
	for(int i = 0; i < z; i++){  // stampa i nomi e i numeri corrispondenti in ordine
		cout << r[i].nome << " ";
		for(j = 0; j < 10; j++){
			cout << r[i].num[j];
			if(j == 9)
				cout << endl;
		}
	}
}