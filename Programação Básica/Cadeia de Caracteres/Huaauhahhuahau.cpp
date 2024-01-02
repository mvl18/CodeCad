#include <iostream>

using namespace std;

int main(){
    string risada, risada_vogais;
    cin >> risada;

    for (int i = 0; i < risada.size(); i++) {
        if ((risada[i]=='a') || (risada[i]=='e') || (risada[i]=='i') || (risada[i]=='o') || (risada[i]=='u'))
            risada_vogais += risada[i];        
    }

    for (int i = 0; i < (risada_vogais.size() / 2); i++) {
        if (risada_vogais[i] == risada_vogais[risada_vogais.size() - i - 1])
            continue;
        else {
           cout << 'N' << endl;
           return 0;
        }
    }

    cout << 'S' << endl;
  
    return 0;
}