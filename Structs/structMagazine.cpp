// Simple exercise to get familiar with structures

#include <iostream>
#include <string>
using namespace std;

struct mag{
	int code;
	string nome;
	string marca;
	int qnt;
	int price;
};

void mod(mag prod, int i, int s){
	
	switch(s){
		case 1:
			cout << "Inserisci il nuovo nome:" << endl;
			cin >> prod[i].nome;
			cout << "Nome cambiato.";
			system("pause");
			break;
		case 2:
			cout << "Inserisci il nuovo codice:" << endl;
			cin >> prod[i].code;
			cout << "Codice cambiato.";
			system("pause");
			break;
		case 3:
			cout << "Inserisci la nuova marca:" << endl;
			cin >> prod[i].marca;
			cout << "Marca cambiata.";
			system("pause");
			break;
		case 4:
			cout << "Inserisci la nuova quantita':" << endl;
			cin >> prod[i].qnt;
			cout << "Quantita' cambiata.";
			system("pause");
			break;
		case 5:
			cout << "Inserisci il nuovo prezzo:" << endl;
			cin >> prod[i].price;
			cout << "Prezzo cambiato.";
			system("pause");
			break;
	}
	
	menu();
}

void modif(mag prod, int x){
	
	int s;
	string y;
	int z;
	
	cout << "Cerca quello che vuoi modificare per.." << endl;
	cout << "1. Nome" << endl;
	cout << "2. Codice" << endl;
	cout << "3. Marca" << endl;
	cin >> s;
	
	switch(s){
		case 1:
			cout << "Inserisci il nome del prodotto che vuoi cercare:" << endl;
			cin >> y;
			for(int i = 0; i < x; i++){
				if(prod[i].nome == y){
					cout << "Prodotto trovato, cosa vuoi modificare?" << endl
					cout << "1. Nome" << endl;
					cout << "2. Codice" << endl;
					cout << "3. Marca" << endl;
					cout << "4. Quantita'" << endl;
					cout << "5. Prezzo" << endl;
					cin >> s;
					mod(mag prod,i,s);
				}
				else
					cout << "Prodotto non trovato.";
			}
			break;
		case 2:
			cout << "Inserisci il codice del prodotto che vuoi cercare:" << endl;
			cin >> z;
			for(int i = 0; i < x; i++){
				if(prod[i].code == z){
					cout << "Prodotto trovato, cosa vuoi modificare?" << endl
					cout << "1. Nome" << endl;
					cout << "2. Codice" << endl;
					cout << "3. Marca" << endl;
					cout << "4. Quantita'" << endl;
					cout << "5. Prezzo" << endl;
					cin >> s;
					mod(mag prod,i,s);
				}
				else
					cout << "Prodotto non trovato.";
			}
			break;
		case 3:
			cout << "Inserisci la marca del prodotto che vuoi cercare:" << endl;
			cin >> y;
			for(int i = 0; i < x; i++){
				if(prod[i].marca == y){
					cout << "Prodotto trovato, cosa vuoi modificare?" << endl
					cout << "1. Nome" << endl;
					cout << "2. Codice" << endl;
					cout << "3. Marca" << endl;
					cout << "4. Quantita'" << endl;
					cout << "5. Prezzo" << endl;
					cin >> s;
					mod(mag prod,i,s);
				}
				else
					cout << "Prodotto non trovato.";
			}
			break;
	}
	
	menu();
}

void info(int y){
	
	switch(y){
		case 1:
			
			break;
	}
}

void search(mag prod, int x){
	
	int s,d;
	string y;
	int z;
	
	cout << "Cerca per.." << endl;
	cout << "1. Nome" << endl;
	cout << "2. Codice" << endl;
	cout << "3. Marca" << endl;
	cin >> s;
	
	switch(s){
		case 1:
			cout << "Inserisci il nome del prodotto che vuoi cercare:" << endl;
			cin >> y;
			for(int i = 0; i < x; i++){
				if(prod[i].nome == y){
					cout << "Prodotto trovato, vuoi visualizzare le informazioni?" << endl
					cout << "1. Si" << endl;
					cout << "2. No" << endl;
					cin >> d;
					switch(d){
						case 1:
							info(y);
							break;
						case 2:
							menu();
					}
				}
				else
					cout << "Prodotto non trovato.";
			}
			break;
		case 2:
			cout << "Inserisci il codice del prodotto che vuoi cercare:" << endl;
			cin >> y;
			for(int i = 0; i < x; i++){
				if(prod[i].code == y){
					cout << "Prodotto trovato, vuoi visualizzare le informazioni?" << endl
					cout << "1. Si" << endl;
					cout << "2. No" << endl;
					cin >> d;
					switch(d){
						case 1:
							info(y);
							break;
						case 2:
							menu();
					}
				}
				else
					cout << "Prodotto non trovato.";
			}
			break;
		case 3:
			cout << "Inserisci il nome del prodotto che vuoi cercare:" << endl;
			cin >> y;
			for(int i = 0; i < x; i++){
				if(prod[i].nome == y){
					cout << "Prodotto trovato, vuoi visualizzare le informazioni?" << endl
					cout << "1. Si" << endl;
					cout << "2. No" << endl;
					cin >> d;
					switch(d){
						case 1:
							info(y);
							break;
						case 2:
							menu();
					}
				}
				else
					cout << "Prodotto non trovato.";
			}
			break;
	}
}

void stampa(mag prod, int x){
	
	cout << "Prodotti disponibili:" << endl;
	for(int i = 0; i < x; i++){
		cout << "Nome: " << prod[i].nome << endl;
		cout << "Codice: " << prod[i].code << endl;
		cout << "Marca: " << prod[i].marca << endl;
		cout << "Quantit�': " << prod[i].qnt << endl;
		cout << "Prezzo: " << prod[i].price << endl;
	}
	
	system("pause");
	system("cls");
	menu();
	
}

void menu(mag prod, int x){
	
	int s,y;
	cout << "Cosa vuoi fare?" << endl;
	cout << "1. Visualizza i prodotti inseriti" << endl;
	cout << "2. Ricerca un prodotto" << endl;
	cout << "3. Modifica un prodotto" << endl;
	cout << "4. Esci" << endl;
	cin << s;
	
	switch(s){
		case 1:
			system("cls");
			stampa(mag prod,x);
			break;
		case 2:
			system("cls");
			search(mag prod,x);
			break;
		case 3:
			system("cls");
			modif(mag prod);
			break;
		case 4:
			exit();
	}
}

void dati(){
	
	int x;
	cout << "Quanti prodotti vuoi inserire?" << endl;
	cin >> x;
	
	mag prod[x];
	
	for(int i = x; i < x; i++){
		cout << "Inserisci il codice" << endl;
		getline(cin,prod[i].code);
		cout << "Inserisci il nome" << endl;
		getline(cin,prod[i].nome);
		cout << "Inserisci la marca" << endl;
		getline(cin,prod[i].marca);
		cout << "Inserisci la quantita'" << endl;
		getline(cin,prod[i].qnt);
		cout << "Inserisci il prezzo" << endl;
		getline(cin,prod[i].price);
	}
	
	menu(mag prod,x);
}

int main(){
	
	dati();
}
