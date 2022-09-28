#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 0, max = 0;
    cin >> n;
    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];

        if (A[i] > max)
        {
            max = A[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i] == max)
        {
            count++;
        }
    }

    cout << count << endl;
}
