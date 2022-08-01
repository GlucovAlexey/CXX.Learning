#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    long long n, s = 0;
    cin >> n;
    vector <long long> a(n);
    for (int i = 0; i < a.size(); i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    for (long long i = 0; i < a.size() - 1; i++) {
        for (long long j = i + 1; j < a.size(); j++) {
            long long max = a[i] + a[j];
            long long d = lower_bound(a.begin(), a.end(), max) - a.begin();
            s += (d - j - 1);
        }
    }
    cout << s;
    return 0;
}
