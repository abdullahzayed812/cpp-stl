#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Vector mehtod (puch_back, begin, end, rbegin, rend, erase, insert, clear, size)
// Loop over vector by size method like string

void print(vector<int> &v) {
  int a = v[0];
  auto b = v[1];

  for (auto x: v) {
    cout << x << endl;
  }
  cout << endl;
}

int main() {
  vector<int> v(5);

  for (int i = 0; i < (int) v.size(); i++) {
    v[i] = 10 - i;
  }

  print(v);

  sort(v.begin() + 1, v.end());

  cout << "*******************\n";

  print(v);

  sort(v.begin(), v.end());

  cout << "*******************\n";

  sort(v.rbegin(), v.rend());

  print(v);

  return 0;
}