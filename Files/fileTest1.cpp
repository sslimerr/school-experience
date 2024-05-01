// Simple exercise to get familiar with files

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <cstdlib>
using namespace std;

int main(){
	
	string text;
	char x;
	
	fstream file("file.txt");
	fstream copia("copia.txt");
	
	while(!file.eof()){
		file >> x;
		if(x == '$')
			break;
		copia << x;
	}
}
