#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n >> a;
        int v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int b = a;
        int bestP = -1;

        for (int tB = a - 1; tB <= a + 1; tB++)
        {
            int p = 0;
            for (int i = 0; i < n; i++)
            {
                if (abs(v[i] - tB) < abs(v[i] - a))
                    p++;
            }
            if (p > bestP)
            {
                bestP = p;
                b = tB;
            }
        }

        cout << b << "\n";
    }
    return 0;
}
