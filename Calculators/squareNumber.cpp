// Checks if the side of the square you put would create a square number

#include <iostream>
using namespace std;

int main() {
    
    int n;

    cout << "Inserisci un numero: " << endl;
    cin >> n;

    int c = 1;

    while (c * c < n)
        c++;

    if (c * c == n)
        cout << n << " è un quadrato perfetto." << endl;
    else
        cout << n << " non è un quadrato perfetto." << endl;

}
