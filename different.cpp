#include <iostream>
using namespace std;

#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);

  int64_t x, y;
  while (cin >> x >> y) cout << abs(x - y) << endl;

  return 0;
}

