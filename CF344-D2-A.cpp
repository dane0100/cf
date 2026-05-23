#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main() {
    int n, g = 1;
    char a;

    cin >> n >> a >> a;

    for(int i =1; i < n; i++) {
        char b, c;
        cin >> b >> c;
        if(b==c) g++;
        a=c;
    }
    cout << g << endl;
}