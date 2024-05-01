// Simple exercise to get familiar with strings

#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string s1, s2;
	
	cout << "Inserisci la prima stringa" << endl;
	getline(cin,s1);

	cout << "Inserisci la seconda stringa" << endl;
	cin >> s2;

	cout << "Stringa 1: " <<s1 << endl;
	cout << "Stringa 2: " << s2 << endl;

	s1.clear();
	cout << "Stringa 1(cleared): " << s1 << endl;

	if (s1.empty())
		cout << "Stringa vuota.";
	else
		cout << "Stringa sempre piena.";
}
