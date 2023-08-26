#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, t;
    cin >> n;
    if (n % 2 == 1)
        cout << -1;
    else
    {
        int a[n];
        for (int i = 0; i < n; i++)
        {
            a[i] = i + 1;
        }
        int i = 0;
        while (i < n - 1)
        {
            t = a[i];
            a[i] = a[i + 1];
            a[i + 1] = t;
            i = i + 2;
        }
        for (auto b : a)
            cout << b << " ";
    }
    return 0;
}