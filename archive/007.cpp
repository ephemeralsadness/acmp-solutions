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

    string a, b, c;
    cin >> a >> b >> c;

    auto comp = [](const string& lhs, const string& rhs) -> bool {
        if (lhs.size() == rhs.size())
            return lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end());
        return lhs.size() < rhs.size();
    };

    cout << max(a, max(b, c, comp), comp) << endl;

    return 0;
}
