// Outputs the array and the sum of it

#include <iostream>
using namespace std;

int main(){
	
	int n;
	
	cout << "Inserisci la grandezza dell'array" << endl;
	cin >> n;
	
	int v[n];
    int i, x = 0;
    
    cout << "Inserisci " << n << " numeri" << endl;
    	
    for(i = 0; i < n; i++)
        cin >> v[i];
	
	i = 0;
	
	while(i < n){
		cout << "#" << i << " " << v[i] << endl;
		x = x + v[i];
		i++;
	}
	cout << "Somma: " << x;
		
	return 0;
}
