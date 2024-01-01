#include <iostream>

using namespace std;

int main(){
    int N, cor;
    cin >> N;
    int quadrados[N];

    for (int i = 0; i < N; i++) {
        cin >> cor;
        quadrados[i] = cor;
    }

    for (int i = 0; i < N; i++) {
        if (quadrados[i] == -1) {
            for (int p = 1; p < 9; p++) {
                if ((quadrados[i+p] == 0) && (i+p < N)) {
                    quadrados[i] = p;
                    break;
                }
                if ((quadrados[i-p] == 0) && (i-p >= 0)) {
                    quadrados[i] = p;
                    break;
                }
            }
            if (quadrados[i] == -1)
                quadrados[i] = 9;
            
        }
    }

    for (int i = 0; i < N; i++)
        cout << quadrados[i] << " ";
    cout << endl;
    
    return 0;
}