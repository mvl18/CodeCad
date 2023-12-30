#include <iostream>

using namespace std;

int main(){
    int N;
	int L, C, Q = 0;
	cin >> N;
	
	for(int i = 0; i < N; i++) {
		cin >> L >> C;
		if(L > C)
			Q += C;
  	}
	cout << Q << endl;
	
	return 0;
}
