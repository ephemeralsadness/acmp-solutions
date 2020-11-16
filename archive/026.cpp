#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

bool has_common_point(ll x1, ll y1, ll r1, ll x2, ll y2, ll r2) {
    if (r1 < r2) {
        swap(x1, x2);
        swap(y1, y2);
        swap(r1, r2);
    }

    ll sqr_len = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    ll sqr_r = (r1 + r2) * (r1 + r2);

    if (sqr_len < (r1 * r1)) {
        return (r1 * r1) <= (sqr_len + r2) * (sqr_len + r2);
    } else if (sqr_len > (r1 * r1)) {
        return sqr_len <= sqr_r;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // cout.precision(15); cout.setf(ios::fixed);
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

    ll x1, y1, r1;
    cin >> x1 >> y1 >> r1;
    ll x2, y2, r2;
    cin >> x2 >> y2 >> r2;

    cout << (has_common_point(x1, y1, r1, x2, y2, r2) ? "YES" : "NO") << endl;

    return 0;
}
