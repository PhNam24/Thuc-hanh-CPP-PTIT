#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int r, l;
        double rp, lp, sp, wp;
        cin >> r >> l >> sp >> wp;
        if ( r < 3 ) rp = 2;
        else if ( r < 5 ) rp = 2.5;
        else if ( r < 7 ) rp = 3;
        else if ( r < 10 ) rp = 3.5;
        else if ( r < 13 ) rp = 4;
        else if ( r < 16 ) rp = 4.5;
        else if ( r < 20 ) rp = 5;
        else if ( r < 23 ) rp = 5.5;
        else if ( r < 27 ) rp = 6;
        else if ( r < 30 ) rp = 6.5;
        else if ( r < 33 ) rp = 7;
        else if ( r < 35 ) rp = 7.5;
        else if ( r < 37 ) rp = 8;
        else if ( r < 39 ) rp  = 8.5;
        else if ( r <= 40 ) rp = 9;
        if ( l > 2 && l < 5 ) lp = 2.5;
        else if ( l < 7 ) lp = 3;
        else if ( l < 10 ) lp = 3.5;
        else if ( l < 13 ) lp = 4;
        else if ( l < 16 ) lp = 4.5;
        else if ( l < 20 ) lp = 5;
        else if ( l < 23 ) lp = 5.5;
        else if ( l < 27 ) lp = 6;
        else if ( l < 30 ) lp = 6.5;
        else if ( l < 33 ) lp = 7;
        else if ( l < 35 ) lp = 7.5;
        else if ( l < 37 ) lp = 8;
        else if ( l < 39 ) lp  = 8.5;
        else if ( l <= 40 ) lp = 9;
        double ans = ( rp + lp + sp + wp )  / 4.0;
        double du = ans - (int)ans;
        if ( du == 0.125 ) ans -= du;
        if ( du == 0.25 ) ans += du;
        if ( du == 0.375 ) ans += 0.125;
        if ( du == 0.625 ) ans -= 0.125;
        if (du == 0.75 ) ans += 0.25;
        if ( du == 0.875 ) ans += 0.125;
        cout << fixed << setprecision(1) << ans;
        cout << endl;
    }
    return 0;
}