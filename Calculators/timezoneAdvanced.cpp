// More advanced timezone calculator

#include <iostream>
using namespace std;

int calcolo(int x, int h, int m);

void menu(){
	cout << "Scegli la citta':" << endl << "1. Londra" << endl << "2. Mosca" << endl << "3. Singapore" << endl << "4. Tokyo" << endl;
}

int input(){
	
	int h, m;
	int sw;
	cin >> sw;
	
	cout << "Che ore sono a Roma?(ore e minuti) " << endl;
	cin >> h;
	cin >> m;
	while (h >= 24 || m >= 60){
        if (h >= 24){
        	cout << "Le ore sono sbagliate:" << endl;
            cout << "Ore: ";
            cin >> h;
		}
        if (m >= 60){
        	cout << "I minuti sono sbagliati:" << endl;
            cout << "Minuti: ";
            cin >> m;
		}
    }
	calcolo(sw,h,m);
}

int calcolo(int x, int h, int m){
	
	switch(x){
		case 1: // Londra -1
    		if(h - 1 < 0)
    			h = h + 24;
    		else
    			h = h - 1;
			break;
  		case 2: // Mosca +2
    		if(h + 2 > 24)
    			h = h - 24;
    		else
    			h = h + 2;
			break;
  		case 3: // Singapore +7
    		if(h + 7 > 24)
    			h = h - 24;
    		else
    			h = h + 7;
			break;
		case 4: // Tokyo +8
    		if(h + 8 > 24)
    			h = h - 24;
    		else
    			h = h + 8;
			break;
	}
	
	cout << h << ":" << m;
}

int main(){
	
	menu();
	input();
}
