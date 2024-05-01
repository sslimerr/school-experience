// Simple exercise to get familiar with files

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int main(){

    string text;
    string nomi[3] = {"Centralino1", "Centralino2", "Centralino3"};
    int x; // rand
    int y = 0, z = 0;
    int j = 0;
    string q;
    int f;
    bool flag = true;

    ifstream file("rilevazioni.txt");
    ofstream fileread("rilevazioni.txt");

    srand(time(NULL));

    for(int i = 0; i < 3; i++){
        fileread << nomi[i] << " ";
        x = (rand() % 100 + 1);
        fileread << x << endl;
    }

    while(!file.eof()){
        file >> q;
        file >> f;
        if (f >= 60)
            cout << q << " è maggiore di 60.";
        else
            flag = false;
    }

    if(!flag)
        cout << "Non ci sono." << endl;

    file.close();
}