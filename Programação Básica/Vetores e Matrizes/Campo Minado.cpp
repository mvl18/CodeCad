#include <iostream>

using namespace std;

int main(){
    int N, B;
    cin >> N;
    int bombas[N];
    int desarmar[N];

    for (int i = 0; i < N; i++) {
        cin >> B;
        bombas[i] = B;
    }

    for (int d = 0; d < N; d++) {
        int P = 0;
        if ((d-1 >= 0) && (bombas[d-1] == 1))
            P++;
        if (bombas[d] == 1)
            P++;
        if ((d+1 < N) && (bombas[d+1] == 1))
            P++;
        
        desarmar[d] = P;                
    }

    for (int i = 0; i < N; i++)
        cout << desarmar[i] << endl;
    
    return 0;
}