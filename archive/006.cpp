#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

bool check_chess_letter(char c) {
    return 'A' <= c && c <= 'H';
}

bool check_chess_digit(char c) {
    return '1' <= c && c <= '8';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    // cout.precision(15); cout.setf(ios::fixed);
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

    string s; getline(cin, s);
    if (
            s.size() == 5 &&
            check_chess_letter(s[0]) &&
            check_chess_digit(s[1]) &&
            s[2] == '-' &&
            check_chess_letter(s[3]) &&
            check_chess_digit(s[4])
        ) {

        int letter_diff = abs(s[0] - s[3]);
        int digit_diff = abs(s[1] - s[4]);
        if ((letter_diff == 2 && digit_diff == 1) || (letter_diff == 1 && digit_diff == 2)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "ERROR" << endl;
    }

    return 0;
}
