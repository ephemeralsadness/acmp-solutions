#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    // cout.precision(15); cout.setf(ios::fixed);
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

    ll n; cin >> n;
    int sum = 0;
    for (int i = 0; i < n * n; ++i) {
        int d; cin >> d;
        sum += d;
    }

    cout << sum / 2 << endl;

    return 0;
}
