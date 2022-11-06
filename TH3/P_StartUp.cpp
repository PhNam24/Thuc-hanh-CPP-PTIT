#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for ( int i = 1; i <= n; i++ )
    {
        int a;
        double x, y;
        cin >> a >> x >> y;
        v.push_back({x * 0.7 + y * 0.3, a});
    }
    sort(v.begin(), v.end());
    for ( int i = v.size() - 1; i >= v.size() - 7; i-- )
    {
        cout << v[i].second << " ";
    }
    return 0;
}