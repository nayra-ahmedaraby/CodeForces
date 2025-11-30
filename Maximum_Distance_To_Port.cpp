#include <iostream>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int nA[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nA[i];
    }
    int mS[m];
    int mD[m];
    for (int i = 0, j = 0; i < m; i++, j++)
    {
        cin >> mS[i] >> mD[j];
        //complete after graph
    }
    return 0;
}