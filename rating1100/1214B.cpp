#include <iostream>
using namespace std;

int main() {
    int b, g, n;
    cin >> b >> g >> n;

    // Minimum number of girls = max(0, n - b)
    // Maximum number of girls = min(g, n)

    int min_girls = max(0, n - b);
    int max_girls = min(g, n);

    int answer = max_girls - min_girls + 1;

    cout << answer << endl;

    return 0;
}
