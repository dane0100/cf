#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0, r = n-1;
    int s = 0, d = 0;

    for(int t=0; l<=r ; t++) {
        int c;
        if(a[l] > a[r]) {
            c = a[l];
            l++;
        } else {
            c = a[r];
            r--;
        }
        if(t%2 == 0) {
            s += c;
        } else {
            d += c;
        }
    }
    cout << s << " " << d << endl;
    return 0;
}