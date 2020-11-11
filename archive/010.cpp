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

    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    for (ll x = -100; x <= 100; ++x) {
        if (a * x * x * x + b * x * x + c * x + d == 0) {
            cout << x << ' ';
        }
    }
    
    cout << endl;

    return 0;
}
