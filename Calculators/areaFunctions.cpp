// Area and perimeter of the circle, rectangle and square calculator using functions

#include <iostream>
#include <cmath>
using namespace std;

int c(int r){
	cout << "Circonferenza del cerchio: " << r*2*3.14 << endl << "Area del cerchio: " << pow(r,2)*3.14;
}

int rtg(int a, int b){
	cout << "Perimetro del rettangolo: " << a*2+b*2 << endl << "Area del rettangolo: " << a*b;
}

int q(int l){
	cout << "Perimetro del quadrato: " << l*4 << endl << "Area del quadrato: " << l*l;
}

int main(){
	
	int sw, x, y;
	
	cout << "Cosa vuoi calcolare?" << endl << "1. Cerchio" << endl << "2. Rettangolo" << endl << "3. Quadrato" << endl;
	cin >> sw;
	
	switch(sw) {
  	case 1:
    	cout << "Inserisci il raggio: ";
    	cin >> x;
    	c(x);
		break;
  	case 2:
    	cout << "Inserisci a,b: ";
    	cin >> x;
    	cin >> y;
    	rtg(x,y);
		break;
  	case 3:
    	cout << "Inserisci il lato: ";
    	cin >> x;
    	q(x);
		break;
	}
	
	return 0;
}
