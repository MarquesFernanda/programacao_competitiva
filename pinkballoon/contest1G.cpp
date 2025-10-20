#include <bits/stdc++.h>
using namespace std;

int main(){

    int maiuscula = 0, minuscula = 0, i;
    string s;
    cin >> s;

    for (i = 0; i < s.size(); ++i){
        if (s[i] >= 61 && s[i] <= 90) {
            maiuscula++;
        }
        if (s[i] >= 97 && s[i] <= 122) {
            minuscula++;
        }
    }
    if (maiuscula > minuscula){
        for (i = 0; i < s.size(); ++i){
            if (s[i] > 90){
                s[i] = s[i] - 32;
            }
        }
    } else if (minuscula > maiuscula || minuscula == maiuscula) {
        for (i = 0; i < s.size(); ++i){
            if (s[i] <= 90){
                s[i] = s[i] + 32;
            }
        }
    }
    cout << s << "\n";
    return 0;
}