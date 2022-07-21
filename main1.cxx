#include <iostream>

using namespace std;

long primt_f(long n) {
  if (n % 2 == 0)
    return 2;
  int i = 3;
  while (n % i != 0 && i * i <= n) {
    i += 2;
  }
  if (i * i <= n) {
    return i;
  }
  return n;
}

int main() {
  int number;
  cin >> number;
  cout << primt_f(number);
}
