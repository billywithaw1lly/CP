#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

ll getValue(int x, int y, int size, ll base) {
    if (size == 2) {
        if (x == 1 && y == 1) return base;
        if (x == 2 && y == 2) return base + 1;
        if (x == 2 && y == 1) return base + 2;
        return base + 3;
    }

    int half = size / 2;
    ll block = 1LL * half * half;

    if (x <= half && y <= half)
        return getValue(x, y, half, base);
    else if (x > half && y > half)
        return getValue(x - half, y - half, half, base + block);
    else if (x > half && y <= half)
        return getValue(x - half, y, half, base + 2 * block);
    else
        return getValue(x, y - half, half, base + 3 * block);
}


pii getCoordinates(ll d, int size, ll base) {
    if (size == 2) {
        if (d == base) return {1, 1};
        if (d == base + 1) return {2, 2};
        if (d == base + 2) return {2, 1};
        return {1, 2};
    }

    int half = size / 2;
    ll block = 1LL * half * half;

    if (d < base + block)
        return getCoordinates(d, half, base);
    else if (d < base + 2 * block) {
        auto [x, y] = getCoordinates(d, half, base + block);
        return {x + half, y + half};
    } else if (d < base + 3 * block) {
        auto [x, y] = getCoordinates(d, half, base + 2 * block);
        return {x + half, y};
    } else {
        auto [x, y] = getCoordinates(d, half, base + 3 * block);
        return {x, y + half};
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        int size = 1 << n;  

        while (q--) {
            string op;
            cin >> op;
            if (op == "->") {
                int x, y;
                cin >> x >> y;
                cout << getValue(x, y, size, 1) << '\n';
            } else {
                ll d;
                cin >> d;
                auto [x, y] = getCoordinates(d, size, 1);
                cout << x << ' ' << y << '\n';
            }
        }
    }

    return 0;
}