#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, x, d;
        int n;
        cin >> r >> x >> d >> n;
        int rated = 0;
        int rounds[n];
        for (int i = 0; i < n; i++)
        {
            cin >> rounds[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (rounds[i] == 1)
            {
                rated++;
                if (r > d)
                {
                    r = r - d;
                }
                else
                {
                    r = 0;
                }
            }
            else
            {
                if (r < x)
                {
                    rated++;
                    if (r > d)
                    {
                        r = r - d;
                    }
                    else
                    {
                        r = 0;
                    }
                }
            }
        }

        cout << rated;
    }

    return 0;
}
