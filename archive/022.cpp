#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // cout.precision(15); cout.setf(ios::fixed);
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

    int a;
    cin >> a;
    int k = 0;
    while (a) {
        k += (a & 1);
        a >>= 1;
    }

    cout << k << endl;

    return 0;
}
