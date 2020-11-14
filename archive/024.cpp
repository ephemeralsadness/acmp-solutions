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

    int n, m; cin >> n >> m;

    if (m == 0) {
        cout << 1 << endl;
    } else if (m == 1) {
        cout << n << endl;
    } else {
        int sm = 0;
        for (int k = m; k <= n; k += m - 1) {
            sm += n - k + 1;
        }
        cout << sm << endl;
    }

    return 0;
}
