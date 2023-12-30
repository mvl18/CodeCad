#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int N;
    double R;
    cout << fixed << setprecision(4);
    
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> R;
		R = sqrt(R);
		cout << R << endl;
	}

    return 0;
}