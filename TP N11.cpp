#include <bits/stdc++.h>

using namespace std;
void generarMatriz(int n, int m);
int main() {
    int n, m;

    
    cout << "Ingrese el numero de filas: ";
    cin >> n;
    cout << "Ingrese el numero de columnas: ";
    cin >> m;

    generarMatriz(n, m);

    return 0;
}
void generarMatriz(int n, int m){
    char matriz[n][m];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            matriz[i][j] = 'L';
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (j % 2 != 0) {
                matriz[i][j] = 'O';
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matriz[i][j];
        }
        cout << endl;
    }
}
