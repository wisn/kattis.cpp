#include <iostream>
using namespace std;

#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);

  uint x;
  cin >> x;

  cout
  << (x % 2 == 1 ? "Alice" : "Bob")
  << endl;

  return 0;
}

