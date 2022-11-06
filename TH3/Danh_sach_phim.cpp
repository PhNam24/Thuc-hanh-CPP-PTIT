#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

struct phim
{
    string ma, ten, theLoai;
    int d, m, y, tap, stt;
};

void in (phim a)
{
    printf("P%.3d ", a.stt);
    cout << a.theLoai << " ";
    printf ("%.2d/%.2d/%.4d ", a.d, a.m, a.y);
    cout << a.ten << " " << a.tap << endl;
}

bool cmp (phim a, phim b)
{
    if ( a.y != b.y ) return a.y < b.y;
    else if ( a.m != b.m ) return a.m < b.m;
         else if ( a.d != b.d ) return a.d < b.d;
              else if ( a.ten != b.ten ) return a.ten < b.ten;
    return a.tap > b.tap;
}

int getNum (string s)
{
    int ans = 0;
    for ( int i = 0; i < s.size(); i++ )
    {
        if ( isdigit(s[i]) ) ans = ans * 10 + s[i] - '0';
    }
    return ans;
}

int main ()
{
    int n, m;
    cin >> n >> m;
    string s[n];
    cin.ignore();
    for ( int i = 0; i < n; i++ )
    {
        getline(cin, s[i]);
    }
    phim a[m];
    for ( int i = 0; i < m; i++ )
    {
        a[i].stt = i + 1;
        cin >> a[i].ma;
        a[i].theLoai = s[getNum(a[i].ma) - 1];
        scanf ("%d/%d/%d", &a[i].d, &a[i].m, &a[i].y);
        cin.ignore();
        getline(cin, a[i].ten);
        cin >> a[i].tap;
    }
    sort(a, a + m, cmp);
    for ( auto i : a ) in(i);  
    return 0;
}