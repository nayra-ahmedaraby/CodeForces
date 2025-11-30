#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a;
        int maxVal = 0;
        for(int i = 0; i < n; i++) {
            cin >> a;
            if(a > maxVal) {
                maxVal = a;
            }
        }
        cout << maxVal << "\n";
    }
    return 0;
}
