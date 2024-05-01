// It counts how many times the number 0 is repeated in the array

#include <iostream>
#include <string>
#define SIZE 7
using namespace std;

int main(){

	int v[SIZE]; // array
	int i = 0, j = 0; // contatori

	cout << "Inserisci un array di " << SIZE << " numeri." << endl;

	for(i = 0; i < SIZE; i++)
        cin >> v[i];

    for(i = 0; i < SIZE; i++)
        if (v[i] == 0)
        	j++;
    
    cout << "Il numero 0 è ripetuto " << j << " volte.";

}
