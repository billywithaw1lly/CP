#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)


void solve()
{
    fastio;
    ll n, m;
    cin >> n >> m;

    vector<string> numbers(n);
    ll non_zero_digits_sum = 0;
    vector<int> trailing_zeros_counts;

    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
        int trailing_zeros = 0;
        
        for (auto it = numbers[i].rbegin(); it != numbers[i].rend() && *it == '0'; ++it)
        {
            trailing_zeros++;
        }

        trailing_zeros_counts.push_back(trailing_zeros);
        non_zero_digits_sum += (numbers[i].length() - trailing_zeros);
    }
    std::sort(trailing_zeros_counts.begin(), trailing_zeros_counts.end(), std::greater<int>());

    long long total_digits_removed = non_zero_digits_sum;
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 != 0)
        {
            total_digits_removed += trailing_zeros_counts[i];
        }
    }
    if (total_digits_removed > m) cout << "Sasha\n";
    else cout << "Anna\n";

    return;
}

int main()
{
    fastio;
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}