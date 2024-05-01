// Simple exercise to get familiar with files

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;

int main(){
	
	string text;
	int temp;
	int y, prd;
	string g, a;
	
	ifstream pezzi("pezzi.txt");
	
	cout << "Dati inseriti:" << endl;
	while (getline (pezzi, text)) {
  		string data = text.substr(0,8);
  		string prod = text.substr(9,12);
		string giorno = data.substr(0,2);
		string mese = data.substr(2,2);
		string anno = data.substr(4,4);

		cout << data << "(" << prod << ")" << " => " << giorno << " Gennaio " << anno << "(" << prod << ")" << endl;
		
		for(int i = 0; i < 6; i++){
			prd = stoi(prod);
			temp = prd;
			if(prd > temp){
				g = giorno;
				a = anno;
			}
		}
	}
	
	cout << "Giorno con la produzione maggiore: " << g << " Gennaio " << a <<  "(" << prd << ")" << endl;
	cout << "Media dei pezzi prodotti: ";
}
