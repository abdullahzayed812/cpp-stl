#include <iostream>
#include <set>
using namespace std;

// Multiset is uniqeu and sorted data sturcture
// Multiset allow us to repeat items in it

void print(multiset<string> &setString) {
  for (auto item: setString) {
    cout << item << endl;
  }
  cout << endl;
}

int main() {
  multiset<string> multisetString;

  multisetString.insert("Mohammed");
  multisetString.insert("Ahmed");
  multisetString.insert("Mohammed");
  multisetString.insert("Ali");

  print(multisetString);

  cout << "******************\n";
  
  set<string>::iterator ite = multisetString.find("Ahmed");
  // auto ite = multisetString.find("Ahmed");

  if (ite != multisetString.end()) {
    multisetString.erase(ite);
  }

  print(multisetString);

  return 0;
}