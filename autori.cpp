#include <iostream>
using namespace std;

#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);

  string s;
  cin >> s;

  ushort i, n = s.size(), x;
  for (i = 0; i < n; i++)
  {
    x = s.at(i);
    if (64 < x && x < 91) cout << s.at(i);
  } cout << endl;

  return 0;
}

