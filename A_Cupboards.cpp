#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, l1 = 0, l0 = 0, r1 = 0, r0 = 0;
    cin >> n;
    int left[n], right[n];
    for (int i = 0; i < n; i++)
    {
        cin >> left[i];
        cin >> right[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (left[i] == 1)
            l1++;
        if (left[i] == 0)
            l0++;
        if (right[i] == 1)
            r1++;
        if (right[i] == 0)
            r0++;
    }

    int x = min(l1, l0);
    int y = min(r1, r0);
    cout << x + y;
    return 0;
}