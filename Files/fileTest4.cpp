// Simple exercise to get familiar with files

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
	
	string text;
	int h1, m1, h2, m2;
	int x, y;
	
	ifstream file("orario.txt");
	ifstream diff("diff.txt");
	
	cout << "Dati inseriti:" << endl;
	while(getline (file, text)) {
  		string orario = text.substr(0,9);
  		string ore1 = orario.substr(0,2);
		string min1 = orario.substr(2,2);
		string ore2 = orario.substr(5,2);
		string min2 = orario.substr(7,2);
		
		cout << orario << " => " << ore1 << ":" << min1 << " - " << ore2 << ":" << min2 << endl;
		
		h1 = atoi(ore1.c_str());
		m1 = atoi(min1.c_str());
		h2 = atoi(ore2.c_str());
		m2 = atoi(min2.c_str());
		
		if(h1 > h2)
			x = h1 - h2;
		else
			x = h2 - h1;
		
		y = m2 - m1;
		if(y < 0){
			y += 60;
			x--;
		}
		
		cout << "Differenza di orario: " << x << " ore e " << y << " minuti." << endl;
		cout << endl;
	}
}
