#include <iostream>

using namespace std;

int main(){
    int MAX, A, B;
    char operacao;
    cin >> MAX >> A >> operacao >> B;

    if (operacao == '+') {
        if (A + B > MAX)
            cout << "OVERFLOW" << endl;
        else
            cout << "OK" << endl;
    }
    else {
        if (A * B > MAX)
            cout << "OVERFLOW" << endl;
        else
            cout << "OK" << endl;
    }
    
    return 0;
}
