// Simple exercise to get familiar with structure

#include <iostream>
#include <string>
using namespace std;

struct a{
	string nome;
	string cognome;
	int age;
	int classe;
	string sezione;
};

int main(){
	
	int x;
	
	cout << "Quanti alunni ci sono nella classe?" << endl;
	cin >> x;
	
	a v[x];
	
	for(int i = 0; i < x; i++){
		cout << "Inserisci il nome (" << i+1 << "/" << x << ")" << endl;
		cin >> v[i].nome;
		cout << "Inserisci il cognome ("<< i+1 << "/" << x << ")" << endl;
		cin >> v[i].cognome;
		cout << "Inserisci l'eta' (" << i+1 << "/" << x << ")" << endl;
		cin >> v[i].age;
		cout << "Inserisci la classe (" << i+1 << "/" << x << ")" << endl;
		cin >> v[i].classe;
		cout << "Inserisci la sezione (" << i+1 << "/" << x << ")" << endl;
		cin >> v[i].sezione;
	}
	
	system("cls");
	
	for(int j = 0; j < x; j++)
		for(int i = 0; i < 5; i++){
			cout << "Alunno n" << i+1 << ":" << endl;
			cout << "Nome: " << v[i].nome << " " << v[i].cognome << endl;
			cout << "Eta': " << v[i].age << endl;
			cout << "Classe: " << v[i].classe << v[i].sezione << endl;
			cout << endl;
		}
	
	//system("pause");
	//system("cls");
	
	for(int i = 0; i < x; i++)
		if(v[i].age >= 14)
			cout << "L'alunno " << v[i].nome << " " << v[i].cognome << " ha " << v[i].age << " anni.";
		else
			cout << "Tutti gli alunni hanno meno di 14 anni.";
}
