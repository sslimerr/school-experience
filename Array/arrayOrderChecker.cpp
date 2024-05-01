// Checks if the array is in ascending order

#include <iostream>
#define SIZE 10
using namespace std;

int main() {
	
    int v[SIZE];
    int i;
    bool flag = true;

    cout << "Inserisci " << SIZE << " numeri di un array." << endl;
    
    for(i = 0; i < SIZE; i++)
        cin >> v[i];
    
    for(i = 1; i < SIZE; i++)
        if (v[i] < v[i - 1]) {
            flag = false;
            break;
        }
	
    if (flag)
        cout << "I numeri sono in ordine crescente.";
    else
        cout << "I numeri non sono in ordine crescente.";
}
