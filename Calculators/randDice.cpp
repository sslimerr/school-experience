// Simple dice simulator to get familiar with the rand function

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	
	int r = 7; // tiri del dado
	int x, y;
	int j = 0, t = 0; // contatori
	
	srand(time(0));
	
	for(int i = 0; i < r; i++){
		cout << "Tira il dado (" << i+1 << "/" << r << ")" << endl;
		x = (rand()%6)+1;
		cout << x << endl;
		y = (rand()%6)+1;
		cout << "Il computer ha tirato " << y << endl;
		if(x > y){
			cout << "Hai vinto." << endl;
			j++;
		}
		if(x < y){
			cout << "Hai perso." << endl;
			t++;
		}
		if(x == y)
			cout << "Pareggio." << endl;
		cout << endl;
	}
	
	if(j > t)
		cout << "Il giocatore ha vinto. " << j << "/" << t;
	else if(j < t)
		cout << "Il computer ha vinto. " << t << "/" << j;
	else if(j == t)
		cout << "Pareggio. " << t << "/" << j;
}
