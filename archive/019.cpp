#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

bool check_knight(char x1, char y1, char x2, char y2) {
    int a = abs(x2 - x1);
    int b = abs(y2 - y1);
    return (a == 1 && b == 2) || (a == 2 && b == 1);
}

bool check_rook(char x1, char y1, char x2, char y2) {
    return x1 == x2 || y1 == y2;
}

bool check_bishop(char x1, char y1, char x2, char y2) {
    return x1 - y1 == x2 - y2 || x1 + y1 == x2 + y2;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // cout.precision(15); cout.setf(ios::fixed);
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

    string queen_pos, rook_pos, knight_pos;
    cin >> queen_pos >> rook_pos >> knight_pos;

    int counter = 0;
    for (char i = 'A'; i <= 'H'; ++i) {
        for (char j = '1'; j <= '8'; ++j) {
            if (queen_pos[0] == i && queen_pos[1] == j ||
                rook_pos[0] == i && rook_pos[1] == j ||
                knight_pos[0] == i && knight_pos[1] == j) {

                continue;

            }

            if (check_rook(queen_pos[0], queen_pos[1], i, j) ||
                check_bishop(queen_pos[0], queen_pos[1], i, j) ||
                check_rook(rook_pos[0], rook_pos[1], i, j) ||
                check_knight(knight_pos[0], knight_pos[1], i, j)) {

                ++counter;

            }
        }
    }

    cout << counter << endl;

    return 0;
}
