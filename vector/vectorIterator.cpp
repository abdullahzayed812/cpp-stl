#include <iostream>
#include <vector>
using namespace std;

// Vector mehtod (puch_back, begin, end, rbegin, rend, erase, insert, clear, size)
// Loop over vector by size method like string

void print(vector<int> &v) {
  vector<int>::iterator ite;

  ite = v.begin(); // Like index

  while (ite != v.end()) {
    cout << *ite << " "; // Like v[index]
    ite++; // Increment index
  }
  cout << endl;
}

int main() {
  vector<int> v(5);

  for (int i = 0; i < (int) v.size(); i++) {
    v[i] = i;
  }

  cout << "*******************\n";

  print(v);

  v.erase(v.begin() + 3);

  v.insert(v.begin() + 1, 9);

  cout << "*******************\n";

  print(v);

  return 0;
}