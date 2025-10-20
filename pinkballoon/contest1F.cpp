#include <bits/stdc++.h>
using namespace std;

int main(void){

    int count;
    string s;

    cin >> s;

    count = 1;
    for (int i = 0; s[i] != '\0'; ++i){
        if(s[i] == s[i-1]){
            count++;
            if (count == 7){
                cout << "YES" << "\n";
                return 0;
            }
        }
        else {
            count = 1;
        }
    }
    cout << "NO" << "\n";
    return 0;
}