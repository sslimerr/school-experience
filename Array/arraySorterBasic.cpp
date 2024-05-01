// Adds two arrays and sorts the new one

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	
	int y; // random
	int x; // grandezza dei vettori
	int temp; // variabile temporanea
	
	cout << "Inserisci la lunghezza dei vettori che vuoi sommare" << endl;
	cin >> x;
	
	int v1[x],v2[x],r[x];
	
	srand(time(0));
		
	cout << "Primo vettore:" << endl;
	for(int i = 0; i < x; i++){
		y = rand() % 10; // genera un numero casuale da 0 a 9
		v1[i] = y;
		cout << v1[i] << " ";
	}
	cout << endl;
	
	cout << "Secondo vettore:" << endl;
	for(int i = 0; i < x; i++){
		y = rand() % 10; // genera un numero casuale da 0 a 9
		v2[i] = y;
		cout << v2[i] << " ";
	}
	cout << endl;
	
	cout << "Somma dei vettori:" << endl;
	for(int i = 0; i < x; i++){
		r[i] = v1[i] + v2[i];
		cout << r[i] << " ";
	}
	cout << endl;
	
	cout << "Vettore ordinato:" << endl;
	for(int i = 0; i < x; i++)
		for(int j = 0; j < x; j++)
			if(r[i] < r[j]){
				temp = r[i];
				r[i] = r[j];
				r[j] = temp;
			}
	for(int i = 0; i < x; i++)
		cout << r[i] << " ";
}
