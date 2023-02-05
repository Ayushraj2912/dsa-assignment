#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a = 0, b = 0;
    cin >> n;

    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int min = A[0];
    int max = A[0];

    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            a++;
            max = A[i];
        }
        if (A[i] < min)
        {
            b++;
            min = A[i];
        }
    }

    cout << a << " " << b;
}
