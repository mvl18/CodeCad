#include <iostream>

using namespace std;

int main(){
    int N, peso = 0, soma_linha = 0, soma_coluna = 0, soma;
    cin >> N;

    int matriz[N+1][N+1];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            soma_linha += matriz[i][j];
            soma_coluna += matriz[j][i];
        }
        matriz[i][N] = soma_linha;
        matriz[N][i] = soma_coluna;
        soma_linha = 0;
        soma_coluna = 0;
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            soma = matriz[i][N] + matriz[N][j] - 2*matriz[i][j];
            peso = max(soma, peso);
            soma = 0;
        }    
    }
    cout << peso << endl;

    return 0;
}