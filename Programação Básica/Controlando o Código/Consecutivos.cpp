#include <iostream>

using namespace std;

int main(){
    int N, V, U = -1, P = 1, T = 0;
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> V;
		if(V == U){
			P++;
            T = max(T, P);
        }
        else
            P = 1;
		U = V;
	}
	cout << T << endl;

    return 0;
}