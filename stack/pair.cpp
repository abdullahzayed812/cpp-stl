#include <iostream>
#include <stack>
using namespace std;

// stack methods (push, pop, top, empty)

void print(stack<pair<int, string>> s) {
  while (!s.empty()) {
    cout << s.top().first << " ";
    s.pop();
  }
}

int main() {
  pair<int, string> p = make_pair(10, "Mostafa");
  // cout << p.first << " " << p.second;

  stack<pair<int, string>> s;
  s.push(p);
  s.push(p);

  // print(s);

  pair<int, pair<int, string>> my_p = make_pair(10, make_pair(10, "Mostafa"));
  cout << my_p.second.second;
}