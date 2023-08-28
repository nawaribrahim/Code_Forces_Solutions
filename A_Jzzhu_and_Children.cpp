#include <bits/stdc++.h>
using namespace std;
int main()

{
    int n, m, ans , mx = 0;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        double x;
        cin >> x;
        if (ceil(x / m) >= mx)
        {
            ans = i;
            mx = ceil(x / m);
        }
    }
    cout << ans;
    return 0;
}