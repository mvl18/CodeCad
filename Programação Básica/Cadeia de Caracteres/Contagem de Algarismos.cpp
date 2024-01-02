#include <iostream>

using namespace std;

int main(){
    int N, _0 = 0, _1 = 0, _2 = 0, _3 = 0, _4 = 0, _5 = 0, _6 = 0, _7 = 0, _8 = 0, _9 = 0;
    string numero;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> numero;
        for (int j = 0; j < numero.size(); j++) {
            if (numero[j] == '0')
                _0++;
            else if(numero[j] == '1')
                _1++;
            else if(numero[j] == '2')
                _2++;
            else if(numero[j] == '3')
                _3++;
            else if(numero[j] == '4')
                _4++;
            else if(numero[j] == '5')
                _5++;
            else if(numero[j] == '6')
                _6++;
            else if(numero[j] == '7')
                _7++;
            else if(numero[j] == '8')
                _8++;
            else if(numero[j] == '9')
                _9++;
        }
    }

    cout << "0 - " << _0 << endl;
    cout << "1 - " << _1 << endl;
    cout << "2 - " << _2 << endl;
    cout << "3 - " << _3 << endl;
    cout << "4 - " << _4 << endl;
    cout << "5 - " << _5 << endl;
    cout << "6 - " << _6 << endl;
    cout << "7 - " << _7 << endl;
    cout << "8 - " << _8 << endl;
    cout << "9 - " << _9 << endl;

    return 0;
}