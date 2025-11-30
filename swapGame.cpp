// A. Souvlaki VS. Kalamaki
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int even[n], odd[n], e = 0, o = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                even[e++] = a[i];
            else
                odd[o++] = a[i];
        }

        for (int i = 0; i < e; i++)
        {
            for (int j = i + 1; j < e; j++)
            {
                if (even[i] > even[j])
                {
                    int temp = even[i];
                    even[i] = even[j];
                    even[j] = temp;
                }
            }
        }

        for (int i = 0; i < o; i++)
        {
            for (int j = i + 1; j < o; j++)
            {
                if (odd[i] > odd[j])
                {
                    int temp = odd[i];
                    odd[i] = odd[j];
                    odd[j] = temp;
                }
            }
        }

        int idx = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 && e > 0)
                a[i] = even[--e];
            else if (i % 2 != 0 && o > 0)
                a[i] = odd[--o];
        }

        bool ok = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
                ok = false;
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
