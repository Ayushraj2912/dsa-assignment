#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0, b = 0;
    vector<int> A(3), B(3);

    for (int i = 0; i < 3; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> B[i];

        if (A[i] < B[i])
        {
            b++;
        }
        else if (A[i] > B[i])
        {
            a++;
        }
    }

    cout << a << " " << b << endl;
}
