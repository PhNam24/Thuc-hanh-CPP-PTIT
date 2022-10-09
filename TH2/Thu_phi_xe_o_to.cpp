#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

struct xe
{
    string bien, loai, tt, ngay;
    int cho;
};

int tien (xe a)
{
    if ( a.loai == "Xe_con" )
    {
        if ( a.cho == 5 ) return 10000;
        if ( a.cho == 7 ) return 15000;
    }
    if ( a.loai == "Xe_khach" )
    {
        if ( a.cho == 29 ) return 50000;
        if ( a.cho == 45 ) return 70000;
    }
    return  20000;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int n;
    cin >> n;
    xe a[n];
    unordered_map<string, int> m;
    unordered_map<string, int> m1;
    vector<string> v;
    for ( int i = 0; i < n; i++ )
    {
        cin >> a[i].bien >> a[i].loai >> a[i].cho >> a[i].tt >> a[i].ngay;
    }
    for ( int i = 0; i < n; i++ )
    {
        if ( !m1[a[i].ngay] )
        {
            v.push_back(a[i].ngay);
            m1[a[i].ngay]++;
        }
    }
    for ( int i = 0; i < n; i++ )
    {
        if ( a[i].tt == "IN" ) 
        {
            m[a[i].ngay] += tien(a[i]);
        }
    }
    for ( auto j : v )
    {
        for ( auto i : m )
        {
            if ( i.first == j ) 
            {
                cout << i.first << ": " << i.second << endl;
                break;
            }
        }
    }
    return 0;
}