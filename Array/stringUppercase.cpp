// Outputs the string in uppercase using a function

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
	
	string s1;
	int x;
	
	cout << "Scrivi una frase" << endl;
	getline(cin,s1);

	for(int i = 0; i != s1.size() ; i++)
		if (i == 0 || (s1[i-1] == ' '))
			s1[i] = toupper(s1[i]);
	
	cout << s1;
	
}
