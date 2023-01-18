#include <iostream>
#include <queue>
using namespace std;

// PriorityQueue methods (push, pop, top, empty)

void print(priority_queue<int> pq) {
  cout << " Print priority queue elements: ";
  while (!pq.empty()) {
    cout << pq.top() << " ";
    pq.pop();
  }
}

int main() {
  priority_queue<int> pq;

  pq.push(4);
  pq.push(3);
  pq.push(5);
  pq.push(7);

  print(pq);

  return 0;
}