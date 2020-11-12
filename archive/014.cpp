#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


ll gcd(ll a, ll b) {
    ll c;
    while (b) {
        c = a;
        a = b;
        b = c % b;
    }
    return a;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    // cout.precision(15); cout.setf(ios::fixed);
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

    ll a, b; cin >> a >> b;
    cout << a * b / gcd(a, b) << endl;

    return 0;
}
