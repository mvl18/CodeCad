#include <iostream>

using namespace std;

int main(){
    int N, V, R = 0;
    cin >> N;
    int seq[N];
    
    for (int i = 0; i < N; i++) {
        cin >> V;
        seq[i] = V;
    }

    for (int f = 0; f < N-2; f++) {
        if ((seq[f] == 1) && (seq[f+1] == 0) && (seq[f+2] == 0))
            R++;
    }

    cout << R << endl;

    return 0;
}