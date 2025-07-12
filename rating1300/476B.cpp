#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

int main()
{
    fastread;
    string s1, s2; cin>>s1>>s2;
    int n = s1.length();

    int answerPosition = 0;
    for (int i = 0; i < n; i++)
        answerPosition += (s1[i] == '+' ? 1 : -1);

    int finalPosition = 0;
    int moves = 0;
    for (int i = 0; i < n; i++)
    {
        if (s2[i] == '?')
            moves++;
        else
            finalPosition += (s2[i] == '+' ? 1 : -1);
    }

    int distance = answerPosition - finalPosition;
    double answer;
    if ((distance + moves) % 2 != 0 || moves < abs(distance))
        answer = 0;
    else
    {
        int m = (moves + abs(distance)) / 2; 
        int c = 1;
        for (int i = 0; i < m; i++)
            c *= moves - i;
        for (int i = 2; i <= m; i++)
            c /= i;
        answer = (double)c / (1 << moves);
    }

    printf("%.12f\n", answer);

    return 0;
}
