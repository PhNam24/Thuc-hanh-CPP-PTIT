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
    fstream in;
    in.open("CONTACT.in");
    string ss;
    set<string> s;
    while(in >> ss)
    {
        for ( int i = 0; i < ss.size(); i++ )
        {
            ss[i] = tolower(ss[i]);
        }
        s.insert(ss);
    }
    for ( auto i : s ) cout << i << endl; 
    in.close();
    return 0;
}