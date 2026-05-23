#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main() {
    int n;

    cin >> n;

    int c = 0;

    for(int i = 0; i < n; i++) {
        int p, v, t;
        cin >> p >> v >> t;

        if(p + v + t >= 2) {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}