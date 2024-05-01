// Outputs a multidimentional array

#include <iostream>
#define SIZE 4
using namespace std;

int main() {

    int m[SIZE][SIZE] = {0};

    for (int i = 0; i < SIZE; ++i)
        m[i][i] = 1;

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j)
            cout << m[i][j] << " ";
        cout << endl;
    }
}

