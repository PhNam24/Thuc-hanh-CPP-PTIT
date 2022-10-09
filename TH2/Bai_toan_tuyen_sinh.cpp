#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

struct thiSinh
{
    string mts, ten;
    double p1, p2, p3;
};

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    thiSinh a;
    getline(cin, a.mts);
    getline(cin, a.ten);
    cin >> a.p1 >> a.p2 >> a.p3;
    double ut;
    if ( a.mts[2] == '1' ) ut = 0.5;
    else if ( a.mts[2] == '2' ) ut = 1;
         else if ( a.mts[2] == '3' ) ut = 2.5;
    double tong = a.p1 * 2.0 + a.p2 + a.p3;
    cout << a.mts << " " << a.ten << " ";
    if ( ut - (ll)ut == 0 ) cout << (ll)ut << " ";
    else cout << fixed << setprecision(1) << ut << " "; 
    if ( tong - (ll)tong == 0 ) cout << (ll)tong << " ";
    else cout << fixed << setprecision(1) << tong << " ";
    if ( tong + ut >= 24 ) cout << "TRUNG TUYEN";
    else cout << "TRUOT";
    return 0;
}