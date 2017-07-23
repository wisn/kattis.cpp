#include <iostream>
#include <map>
using namespace std;

#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);

  map <char, string> dict;

  dict.insert(make_pair('a', "@"));
  dict.insert(make_pair('b', "8"));
  dict.insert(make_pair('c', "("));
  dict.insert(make_pair('d', "|)"));
  dict.insert(make_pair('e', "3"));
  dict.insert(make_pair('f', "#"));
  dict.insert(make_pair('g', "6"));
  dict.insert(make_pair('h', "[-]"));
  dict.insert(make_pair('i', "|"));
  dict.insert(make_pair('j', "_|"));
  dict.insert(make_pair('k', "|<"));
  dict.insert(make_pair('l', "1"));
  dict.insert(make_pair('m', "[]\\/[]"));
  dict.insert(make_pair('n', "[]\\[]"));
  dict.insert(make_pair('o', "0"));
  dict.insert(make_pair('p', "|D"));
  dict.insert(make_pair('q', "(,)"));
  dict.insert(make_pair('r', "|Z"));
  dict.insert(make_pair('s', "$"));
  dict.insert(make_pair('t', "']['"));
  dict.insert(make_pair('u', "|_|"));
  dict.insert(make_pair('v', "\\/"));
  dict.insert(make_pair('w', "\\/\\/"));
  dict.insert(make_pair('x', "}{"));
  dict.insert(make_pair('y', "`/"));
  dict.insert(make_pair('z', "2"));

  string s;
  getline(cin, s);

  uint i, n = s.size();
  for (i = 0; i < n; i++)
  {
    char c = tolower(s.at(i));
    ushort x = c;

    if (96 < x && x < 123) cout << dict[c];
    else cout << c;
  } cout << endl;

  return 0;
}

