#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

//#define LL long long

int main() {
  int n;
//  LL var;
  cin >> n;
  int s = 0;
  int c = 0;
  int i = 1;
  for (; pow(i, 2) <= n;) {
    if (n % i <= 0) {
      if (pow(i, 2) == n) {
        c++;
        s += i;
      } else {
        c += 2;
        s += i + n / i;
      }
      i++;
    }
  }
  cout << c << " " << s;
}
