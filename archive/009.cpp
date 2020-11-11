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
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i] > 0) sum += v[i];
    }

    auto [mn_it, mx_it] = minmax_element(v.begin(), v.end());
    if (mn_it > mx_it) swap(mn_it, mx_it);

    int prod = 1;
    for (auto it = mn_it + 1; it != mx_it; ++it) {
        prod *= (*it);
    }

    cout << sum << ' ' << prod << endl;

    return 0;
}
