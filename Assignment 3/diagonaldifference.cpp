#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a = 0, b = 0, ans = 0;
    cin >> n;

    int A[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                a = a + A[i][j];
            }
            if (i + j == n - 1)
            {
                b = b + A[i][j];
            }
        }
    }

    ans = abs(a - b);

    cout << ans << endl;

    return 0;
}
