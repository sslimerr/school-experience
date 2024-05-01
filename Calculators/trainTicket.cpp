// Simple train ticket price calculator simulation

#include <iostream>
#include <string>
using namespace std;

struct treno{
	int num;
	string cit1;
	string cit2;
	string ora;
	float prezzo;
};

void totem();

void menu(int y, treno tot[]){
	
	cout << "Treni disponibili:" << endl;
	cout << endl;
	for(int i = 0; i < y; i++){
		cout << "Codice: " << tot[i].num << endl;
		cout << tot[i].cit1 << "-" << tot[i].cit2 << endl;
		cout << "Arrivo alle ore " << tot[i].ora << endl;
		cout << "Prezzo a persona: " << tot[i].prezzo << endl;
		cout << endl;
	}
	system("pause");
}

void totem(){
	
	int n, k, p; // numero del treno, km da percorrere, passeggeri
	int y; // contatore treni
	
	cout << "Quanti treni vuoi inserire?" << endl;
	cin >> y;
	
	treno tot[y];
	for(int i = 0; i < y; i++){
		cout << "Inserisci il codice del treno" << endl;
		cin >> tot[i].num;
		cout << "Inserisci la citta' di partenza" << endl;
		cin >> tot[i].cit1;
		cout << "Inserisci la citta' di arrivo" << endl;
		cin >> tot[i].cit2;
		cout << "Inserisci l'orario di partenza" << endl;
		cin >> tot[i].ora;
		cout << "Inserisci il prezzo a persona" << endl;
		cin >> tot[i].prezzo;
	}
	system("cls");
	
	menu(y,tot);
	
	cout << "Inserisci il numero del treno." << endl;
	cin >> n;
	system("cls");
	cout << "Inserisci quanti km vuoi fare." << endl;
	cin >> k;
	system("cls");
	cout << "Quanti passeggeri?" << endl;
	cin >> p;
	system("cls");
	
	for(int i = 0; i < y; i++)
		if(n == tot[i].num)
			cout << "Il prezzo per " << p << " passeggeri e " << k << "km e' " << tot[i].prezzo*p*k << "euro.";
}

int main(){
	
	totem();
}
