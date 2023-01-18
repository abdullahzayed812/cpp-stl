#include <iostream>
#include <deque>
using namespace std;

// deque methods (push_front, push_back, pop_front, pop_back, back, front, empty)

void print_back(deque<int> &q) {
  cout << " Print deque element (front): ";
  while (!q.empty()) {
    cout << q.back() << " ";
    q.pop_back();
  }
}

void print_front(deque<int> q) {
  cout << " Print deque element (back): ";
  while (!q.empty()) {
    cout << q.front() << " ";
    q.pop_front();
  }
}

int main() {
  deque<int> q;
  q.push_back(20);
  q.push_back(30);
  q.push_back(40);
  q.push_back(50);
  q.push_front(10);

  print_back(q);
  print_front(q);

  return 0;
}