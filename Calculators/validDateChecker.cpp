// Checks if the date is valid

#include <iostream>
using namespace std;

int main(){
	
	int x, y, z;

	cout << "Inserisci la data(d)" << endl;
	cin >> x;
	cout << "Inserisci la data(m)" << endl;
	cin >> y;
	cout << "Inserisci la data(y)" << endl;	
	cin >> z;
	
	if(x > 31 || x < 0 || z < 0 || y > 12 || y < 0)
		cout<<"Non è una data valida.";
	else
		cout<<"E' una data.";

}
