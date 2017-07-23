#include <iostream>
#include <cmath>
using namespace std;

#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);

  ushort n;
  cin >> n;

  uint sum = 0;
  ushort x, p;
  while (n--)
  {
    cin >> x;
    p  = x % 10;
    x /= 10;
    sum += pow(x, p);
  } cout << sum << endl;

  return 0;
}

