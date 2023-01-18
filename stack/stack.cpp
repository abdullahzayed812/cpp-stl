#include <iostream>
#include <stack>
using namespace std;

void print(stack<string> s) {
  cout << "Print stack element ";
  while (!s.empty()) {
    cout << s.top() << " ";
    s.pop();
  }
}

int main() {
  stack<string> s;
  s.push("Zayed");
  s.push("Ibrahim");
  s.push("Abdullah");

  print(s);

  return 0;
}