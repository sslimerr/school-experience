// Simple timezone calculator

#include <iostream>
using namespace std;

int main(){
	
	int h, m;

	do{
		cout << "Inserisci l'ora e i minuti" << endl;
		cin >> h;
		cin >> m;
	}
	while(h >= 23 || h < 0 || m > 59 || m < 0);
		
	cout << "A Roma sono le " << h << " e " << m << endl;
	
	if (h == 0)
		cout << "A Londra sono le 23 e " << m << endl;
	else
		cout << "A Londra sono le " << h-1 << " e " << m << endl;
	
	
	if (h == 23)
		cout << "Ad Atene sono le 00 e " << m << endl;
	else
		cout << "Ad Atene sono le " << h+1 << " e " << m << endl;
	
}
