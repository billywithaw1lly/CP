#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    list<int> lst;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        lst.push_back(x);
    }

    vector<int> queries(q);
    for (int i = 0; i < q; i++) {
        cin >> queries[i];
    }

    vector<int> result;
    for (int x : queries) {
        int idx = 1;
        for (auto it = lst.begin(); it != lst.end(); ++it, ++idx) {
            if (*it == x) {
                result.push_back(idx);
                lst.erase(it);
                lst.push_front(x);
                break;
            }
        }
    }

    for (int x : result)
        cout << x << " ";
    cout << endl;

    return 0;
}
