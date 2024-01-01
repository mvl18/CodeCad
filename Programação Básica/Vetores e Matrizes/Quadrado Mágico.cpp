#include <iostream>

using namespace std;

int main(){
    int N, valor, soma_esperada = 0, soma_diagonal_p = 0, soma_diagonal_s = 0;
    cin >> N;
    int quadrado[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> valor;
            quadrado[i][j] = valor;
            soma_esperada += valor;
        }
    }
    
    soma_esperada = soma_esperada / N;

    for (int i = 0; i < N; i++) {
        soma_diagonal_p += quadrado[i][i];
        soma_diagonal_s += quadrado[N-i-1][i];
    }

    
    if ((soma_diagonal_p == soma_esperada) && (soma_diagonal_s == soma_esperada)) {
        int soma_linha = soma_esperada;
        int soma_coluna = soma_esperada;
        for (int i = 0; i < N; i++) {
            if ((soma_linha == soma_esperada) && (soma_coluna == soma_esperada)) {
                soma_linha = 0;
                soma_coluna = 0;
                for (int j = 0; j < N; j++) {
                    soma_linha += quadrado[i][j];
                    soma_coluna += quadrado[j][i];
                }
            }
            else {
               cout << -1 << endl;
               return 0;
            }
        }
        cout << soma_esperada << endl; 
    }
    else
        cout << -1 << endl;
    
    return 0;
}