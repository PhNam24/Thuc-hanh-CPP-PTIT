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
    double a[n];
    double Max = -1e9, Min = 1e9;
    for ( auto &i : a )
    {
        cin >> i;
        Max = max(Max, i);
        Min = min(Min, i);
    }
    double ans = 0;
    int cnt = 0;
    for ( auto i : a )
    {
        if ( i == Max || i == Min ) continue;
        else 
        {
            ans += i;
            cnt++;
        }
    }  
    cout << fixed << setprecision(2) << ans / (1.0 * cnt);
    return 0;
}