#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    char operacao;
    double A, B;
    cin >> operacao >> A >> B;
    cout << fixed << setprecision(2);

    if (operacao == 'M') {
        cout << A * B << endl;
    }
    else
        cout << A / B << endl;
    
    return 0;
}