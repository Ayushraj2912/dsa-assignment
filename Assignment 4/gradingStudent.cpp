#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];

        if (A[i] < 38)
        {
            cout << A[i] << endl;
            continue;
        }

        int temp = A[i] % 5;

        if (5 - temp < 3)
        {
            A[i] += 5 - temp;
        }
        cout << A[i] << endl;
    }
}