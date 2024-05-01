// Given hours, minutes and seconds outputs everything in seconds

#include <iostream>
using namespace std;

int main(){
	
	int h, m, s;
	cout << "Inserisci l'ora, i minuti e i secondi:" << endl;
	cin >> h;
	cin >> m;
	cin >> s;

	s = s + (m*60) + (h*60*60);
	
	cout << "Il numero di ore, minuti e secondi trasformato in secondi equivale a: " << s;
	
}