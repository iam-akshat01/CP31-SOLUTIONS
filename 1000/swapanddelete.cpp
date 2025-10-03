#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int x = s.length();
        int numz = 0, numo = 0;
        for (int i = 0; i < x; i++)
        {
            if (s[i] == '0')
                numz++;
            else
                numo++;
        }
        if (numz == numo)
        {
            cout << 0 << endl;
            continue;
        }
        if (numz == x || numo == x)
        {
            cout << x << endl;
            continue;
        }
        else if (numz > numo)
        {
            int bp = 0;
            int n = 0;
            for (int i = 0; i < x; i++)
            {
                if (s[i] == '0')
                {
                    n++;
                    if (n == numo)
                    {
                        bp = i;
                        break;
                    }
                }
            }
            bp++;
            while (bp < x && s[bp] == '1')
            {
                bp++;
            }
            cout << x - bp << endl;
            continue;
        }

        else
        {
            int bp = 0;
            int n = 0;
            for (int i = 0; i < x; i++)
            {
                if (s[i] == '1')
                {
                    n++;
                    if (n == numz)
                    {
                        bp = i;
                        break;
                    }
                }
            }
            bp++;
            while (bp < x && s[bp] == '0')
            {
                bp++;
            }
            cout << x - bp << endl;
            continue;
        }
    }
    return 0;
}
