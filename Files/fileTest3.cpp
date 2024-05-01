// Simple exercise to get familiar with files

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <cstdlib>
using namespace std;

int main(){
	
	string text;
	int x, y, f;
	float z, t;
	
	fstream file("file.txt");
	
	while (getline (file, text)){
  		string file = text.substr(0,12);
  		string km = file.substr(0,7);
		string kmh = file.substr(8,4);

		cout << file << endl;
		cout << "Km percorsi: " << km << endl;
		cout << "Velocita': " << kmh << endl;

		x = atoi(km.c_str());
		y = atoi(kmh.c_str());
		
		t += x;
		z += y;
	}

	f = t / z;
	cout << "Tempo di percorrenza: ~" << f << " ore." << endl;
	cout << "Velocita' media: " << z/3 << "km/h.";

}
