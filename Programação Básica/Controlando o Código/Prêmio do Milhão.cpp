#include <iostream>

using namespace std;

int main(){
    int N, A, T = 0;
	cin >> N;

	for(int i = 1; i <= N; i++){
		cin >> A;
		T += A;
		if(T >= 1000000){
			cout << i << endl;
			break;
		}
	}

    return 0;
}