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

    string s1, s2;
    cin >> s1 >> s2;
    int bulls = 0;
    int cows = 0;
    for (int i = 0; i < (int)s1.size(); ++i) {
        for (int j = 0; j < (int)s2.size(); ++j) {
            if (s1[i] == s2[j]) {
                if (i == j) {
                    ++bulls;
                } else {
                    ++cows;
                }
            }
        }
    }

    cout << bulls << ' ' << cows << endl;

    return 0;
}
