#include <iostream>
#include <cmath>
using namespace std;

#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);

  ushort n;
  cin >> n;

  int x;
  uint total = 0;
  while (n--)
  {
    cin >> x;
    if (x < 0) total++;
  } cout << total << endl;

  return 0;
}

