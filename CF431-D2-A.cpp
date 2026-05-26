#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    string s;
    cin >> s;
    ll t = 0;

    for(char c : s) {
    if(c=='1') t += a1;
    else if(c=='2') t += a2;
    else if(c=='3') t += a3;
    else if(c=='4') t += a4;
    }
    cout << t << endl;
    return 0;
}