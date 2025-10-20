#include <bits/stdc++.h>
using namespace std;

int main(){

    int count = 0;
    long long n;
    cin >> n;

    string s = to_string(n);

    for(int i = 0; i < s.size(); ++i){
        if (s[i] == '4' || s[i] == '7'){
            count++;
        }
    }

    if (count == 4 || count == 7){
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

    return 0;
}