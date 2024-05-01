// Adds two strings

#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string s1;
	string s2;
	
	cout << "Inserisci una stringa:" << endl;
	getline(cin,s1);
	
	cout << "Inserisci un'altra stringa:" << endl;
	getline(cin,s2);
	
	cout << s1 + s2;
	
}
