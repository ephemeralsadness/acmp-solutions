#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int N = 100;
bool paint[N][N];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // cout.precision(15); cout.setf(ios::fixed);
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);


    int w, h; cin >> w >> h;
    int n; cin >> n;
    int x1, y1, x2, y2;
    while (n--) {
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i = x1; i < x2; ++i) {
            for (int j = y1; j < y2; ++j) {
                paint[i][j] = true;
            }
        }
    }

    int sm = 0;
    for (int i = 0; i < w; ++i) {
        for (int j = 0; j < h; ++j) {
            sm += paint[i][j];
        }
    }

    cout << w * h - sm << endl;

    return 0;
}
