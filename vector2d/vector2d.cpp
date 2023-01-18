#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> &v2d) {
  // using namespace first_name;
  for (auto row: v2d) {
    for (auto column: row) {
      cout << column;
    }
    cout << endl;
  }
}

int main() {
  cout << endl;
  vector<vector<int>> v2d(4, vector<int>(7, 3));

  cout << v2d.size() << endl;
  cout << v2d[0].size() << endl;

  v2d[1].push_back(5);
  v2d[1].push_back(6);

  v2d[4].erase(v2d[4].begin());

  print(v2d);

  cout << endl;

  return 0;
}