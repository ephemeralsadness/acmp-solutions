#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

struct point {
    ll x;
    ll y;
};

point vector_from_points(point start, point end) {
    return { end.x - start.x, end.y - start.y };
}

ll dot(point a, point b) {
    return a.x * b.y - a.y * b.x;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    // cout.precision(15); cout.setf(ios::fixed);
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

    int n; cin >> n;
    int counter = 0;
    while (n--) {

        point p, a, b, c, d;
        cin >> p.x >> p.y >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y;

        vector<ll> results = {
                dot(vector_from_points(a, p), vector_from_points(a, b)),
                dot(vector_from_points(b, p), vector_from_points(b, c)),
                dot(vector_from_points(c, p), vector_from_points(c, d)),
                dot(vector_from_points(d, p), vector_from_points(d, a)),
        };

        if (*min_element(results.begin(), results.end()) >= 0 ||
            *max_element(results.begin(), results.end()) <= 0) {

            ++counter;

        }

    }

    cout << counter << endl;

    return 0;
}
