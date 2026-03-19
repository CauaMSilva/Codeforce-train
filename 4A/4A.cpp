#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    if (t%2 == 0 && t > 2)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}