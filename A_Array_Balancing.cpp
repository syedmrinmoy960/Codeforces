
#include <bits/stdc++.h>
#define ll long long
#define pb push_back


using namespace std;

// vector<ll> v1;
// vector<ll>v2;

void solve()
{
    ll n, res = 0;
    cin >> n;
  vector<ll> v1;
vector<ll>v2;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v1.pb(x);
    }
      //sort(v1.begin(),v1.end());
    for (int j = 0; j < n; j++)
    {
        ll y;
        cin >> y;
        v2.pb(y);
    }
    // sort(v1.begin().v1.end());
    // sort(v2.begin(),v2.end());

    for (int i = 0; i < n; i++)
    {
        if (v1[i] > v2[i])
        {
            swap(v1[i], v2[i]);
        }
    }
    for (int i = 1; i < n; i++)
    {
        res += abs(v1[i] - v1[i - 1]) + abs(v2[i] - v2[i - 1]);
    }
    cout << res << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
   

    return 0;
}