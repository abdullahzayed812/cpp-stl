#include <iostream>
#include <vector>
using namespace std;

// Vector mehtod (puch_back, begin, end, rbegin, rend, erase, insert, clear, size)
// Loop over vector by size method like string

int main() {
  vector<int> v1;
  // Capacity initialization {7, 7, 7}
  vector<int> v2(3, 7);

  v1.push_back(10);
  v1.push_back(20);
  v1.push_back(30);

  for (int i = 0; i < (int) v1.size(); i++) {
    cout << "\n" << v1[i] << endl;
  }

  return 0;
}