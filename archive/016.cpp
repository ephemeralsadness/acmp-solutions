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

    int n; cin >> n;
    vector<vector<ll>> dp(n);
    dp.assign(n + 1, vector<ll>(n + 1));
    dp[0][0] = 1;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= n; ++j) {
            for (int k = j + 1; i + k <= n; ++k) {
                dp[i + k][k] += dp[i][j];
            }
        }
    }

    ll sum = 0;
    for (int j = 0; j <= n; ++j) {
        sum += dp[n][j];
    }
    cout << sum << endl;

    return 0;
}
