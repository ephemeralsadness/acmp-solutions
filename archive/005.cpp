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
    vector<int> even;
    vector<int> odd;

    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        if (x % 2 == 0) {
            even.push_back(x);
        } else {
            odd.push_back(x);
        }
    }

    for (auto x : odd) {
        cout << x << ' ';
    }
    cout << endl;
    for (auto x : even) {
        cout << x << ' ';
    }
    cout << endl;

    cout << (even.size() >= odd.size() ? "YES" : "NO") << endl;

    return 0;
}
