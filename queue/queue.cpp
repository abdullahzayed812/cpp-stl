#include <iostream>
#include <queue>
using namespace std;

// Queue methods (puch, pop, front, back, empty)

void printQueueElement(queue<int> &q) {
  cout << "Queue Element ";
  while (!q.empty()) {
    cout << q.front() << " ";
    q.pop();
  }
}

int main() {
  queue<int> q;
  q.push(10);
  q.push(20);
  q.push(30);

  cout << q.back();

  printQueueElement(q);

  return 0;
}