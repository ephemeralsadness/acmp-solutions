#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


vector<int> z_function(const vector<int>& numbers) {
    int n = numbers.size();
    vector<int> z(n);
    int l = 0; int r = 0;
    for (int i = 1; i < n; ++i) {
        if (i <= r)
            z[i] = min(z[i - l], r - i + 1);
        while (i + z[i] < n && numbers[z[i]] == numbers[i + z[i]])
            ++z[i];
        if (r < i + z[i] - 1)
            l = i, r = i + z[i] - 1;
    }

    return z;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    // cout.precision(15); cout.setf(ios::fixed);
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

    int n; cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i)
        cin >> numbers[i];

    auto z = z_function(numbers);

    for (int i = 0; i < n; ++i) {
        if (i + z[i] == n && (n - 1) % i == 0) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
