#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double p, q, z;

    cin >> n;

    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];

        if (A[i] < 0)
        {
            q++;
        }

        else if (A[i] == 0)
        {
            z++;
        }

        else
        {
            p++;
        }
    }

    printf("%.6f\n", (p / n));
    printf("%.6f\n", (q / n));
    printf("%.6f\n", (z / n));
}