#include <cmath>
#include <iostream>
using namespace std;

//#define LL long long
bool prime(long long n) {
  for (long long i = 2; i <= sqrt(n); i++)
    if (n % i == 0)
      return false;
  return true;
}

int main() {
  int number;
  cin >> number;
/*  long long var;
  cout<<sizeof(var)<<endl;
*/
  prime(number) ? cout << "YES" : cout << "NO";
}
