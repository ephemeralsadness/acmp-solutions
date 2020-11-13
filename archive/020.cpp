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

    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    vector<char> less_results(n - 1);
    vector<char> greater_results(n - 1);
    for (int i = 1; i < n; ++i) {
        less_results[i - 1] = (v[i - 1] < v[i]);
        greater_results[i - 1] = (v[i - 1] > v[i]);
    }

    for (int i = 0; i < n - 1; i += 2)
        swap(less_results[i], greater_results[i]);

    int mx = 0;
    {
        int ctr = 0;
        for (int i = 0; i < n - 1; ++i) {
            ctr = (less_results[i] ? ctr + 1 : 0);
            mx = max(mx, ctr);
        }
    }
    {
        int ctr = 0;
        for (int i = 0; i < n - 1; ++i) {
            ctr = (greater_results[i] ? ctr + 1 : 0);
            mx = max(mx, ctr);
        }
    }

    cout << mx + 1 << endl;

    return 0;
}
