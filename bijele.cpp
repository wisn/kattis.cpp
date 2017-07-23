#include <iostream>
using namespace std;

#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);

  ushort knights[] = {1, 1, 2, 2, 2, 8};

  short x;
  for (ushort i = 0; i < 6; i++)
  {
    cin >> x;
    x = knights[i] - x;

    cout << x;

    if (i < 5) cout << " ";
  } cout << endl;

  return 0;
}

