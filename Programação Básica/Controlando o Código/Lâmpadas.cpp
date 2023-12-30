#include <iostream>

using namespace std;

int main(){
    int A = 0, B = 0, N, I;
	cin >> N;

	for(int i = 0; i < N; i++){
		cin >> I;
        
		if(I == 1)
			A += 1;
		else{
			A += 1;
			B += 1;
		}

		A = A%2;
		B = B%2;
	}
	cout << A << endl << B << endl;

    return 0;
}
