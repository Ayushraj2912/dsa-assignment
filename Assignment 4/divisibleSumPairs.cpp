#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, count = 0;
    cin >> n;
    cin >> k;

    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < j; i++)
        {
            if ((A[j] + A[i]) % k == 0)
            {
                count++;
            }
        }
    }

    cout << count;
}