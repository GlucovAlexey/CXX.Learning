#include <cmath>
#include <iostream>
using namespace std;

bool prime(long long n) {
  for (long long i = 2; i <= sqrt(n); i++)
    if (n % i == 0)
      return false;
  return true;
}

int main() {
  int number;
  cin >> number;

  prime(number) ? cout << "YES" : cout << "NO";
}
