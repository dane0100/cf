#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    int u = 0;
    for(char c : s) {
        if (isupper(c)) {
            u++;
        }
    }
int l = s.size() - u;
if(u > l) {
    for(char &c : s) {
        c = toupper(c);
    }
 } else {
        for(char &c : s) {
            c = tolower(c);
        }
    }
cout << s << endl;
return 0;
}