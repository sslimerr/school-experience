// Sums each slot in the array as you write it and stops when the sum is equal to or greater than 50

#include <iostream>
#include <string>
#define SIZE 100
using namespace std;

int main(){
	
	int v[SIZE];
	int x;
	
	cout << "Inserisci un array: " << endl;
	
	for(int i = 0; i < SIZE; i++){
		cin >> v[i];
		x = v[i] + v[i+1];
		if(x >= 50)
			break;
	}
	
	cout << x << " è maggiore o uguale a 50.";
	
	return 0;
}
