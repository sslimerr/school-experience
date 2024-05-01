// Outputs the first n numbers of the Fibonacci sequence

#include <iostream>
using namespace std;

int main(){

    int n, t;
    int x = 0, y = 1;
    
	cout << "Inserisci un numero:" << endl;
    cin >> n;
    cout << "I primi " << n << " numeri della serie di Fibonacci sono: " << endl;
    cout << x << endl;
    if(n > 1)
		cout << y << endl;

    for(int i = 0; i < n-2; i++){
        t = y;
        y += x;
        x = t;
        cout << y << endl;
    }
}
