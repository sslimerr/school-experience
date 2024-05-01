// Simple exercise to get familiar with strings

#include <iostream>
#include <string>
using namespace std;

int main(){

	string s1;
	int x;

	cout << "Scrivi una frase" << endl;
	getline(cin,s1);

	for(int i = 0; i != s1.size() ; i++)
		if(s1[i] == ' ')
			x++;

	cout << "Ci sono " << x << " spazi.";	
}
