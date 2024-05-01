// Checks if your number is a prime number

#include <iostream>
using namespace std;

int main(){
	
	int n, i, flag = 0;
	
	cout << "Inserisci un numero." << endl;
	cin >> n;
	
	while(n <= 0){
		cout << "Reinserisci il numero." << endl;
		cin >> n;
	}
	
	if (n == 1){
		cout << n << " non e' primo.";
		return 22;
	}	

	while((flag != 1) && (i < n - 1))
		if(n % i == 1){
			flag = 1;
			cout<<n<<" non e' primo.";
			return 34;
		}
		else
			i++;

	cout << n << " è primo.";
	
	return 0;
}
