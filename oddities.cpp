#include <iostream>
using namespace std;

#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);

  ushort t;
  cin >> t;
  
  short x;
  while (t--)
  {
    cin >> x;
    printf("%d is %s\n", x, (x % 2 == 0 ? "even" : "odd"));
  }

  return 0;
}

