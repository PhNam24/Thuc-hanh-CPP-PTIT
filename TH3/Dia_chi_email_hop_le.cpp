#include <bits/stdc++.h>
#define test  \
    int t;    \
    cin >> t; cin.ignore(); \
    while (t--)
#define endl '\n'
#define ll long long

using namespace std;

int check(string s)
{
    int cnta = 0, cntdot = 0, cntname = 0, cntfield = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (!isdigit(s[i]) && !isalpha(s[i]) && s[i] != '@' && s[i] != '.' && s[i] != '_')
            return 0;
        if (s[i] == '@')
        {
            cnta++;
            if (cnta > 1)
                return 0;
        }
    }
    if (cnta == 0)
        return 0;
    int d = 0;
    int idx;
    for (int i = 0; s[i] != '@'; i++)
    {
        if (isdigit(s[i]) || isalpha(s[i]))
            d++;
        if (i > 64)
            return 0;
        idx = i;
    }
    if (d == 0)
        return 0;
    for (int i = idx + 1; i < s.size(); i++)
    {
        if (s[i] == '.')
            cntdot++;
        cntfield++;
        if (cntfield > 254)
            return 0;
    }
    if (cntdot == 0)
        return 0;
    if ( s[s.size() - 1] == '.' ) return 0;
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test
    {
        string s;
        getline(cin, s);
        if (check(s))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}