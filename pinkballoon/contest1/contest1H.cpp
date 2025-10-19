#include <bits/stdc++.h>
using namespace std;

bool digitosDiferentes(int numero) {
    string s = to_string(numero);
    int t = s.size();
    for (int i = 0; i < t; i++){
        for (int j = i+1; j < t; j++){
            if (s[i] == s[j]) return false;
        }
    }
    return true;
}
int main() {
    string s;
    cin >> s;
    
    int numero = stoi(s);

    int resultado = numero + 1;
    while (!digitosDiferentes(resultado)) {
        resultado++;
    }
    cout << resultado << "\n";
    return 0;
}