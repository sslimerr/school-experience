// Checks if the two arrays are the same

#include <iostream>
#define SIZE 8
using namespace std;

int main(){
	
    int v[SIZE];
    int i;
    bool flag = true;

    cout << "Inserisci " << SIZE << " numeri di un array."<<endl;
    
    for(i = 0; i < SIZE; i++)
        cin >> v[i];
    
    for(i = 1; i < SIZE; i++)
        if (v[i] != v[i - 1]){
            flag = false;
            break;
        }
	
    if (flag)
        cout << "I numeri sono tutti uguali.";
    else
        cout << "I numeri sono diversi.";
}
