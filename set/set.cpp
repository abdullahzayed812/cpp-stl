#include <iostream>
#include <set>
using namespace std;

// Set is uniqeu and sorted data sturcture
// Allow us to find item easy
// Set methods (insert, erase, size)

void print(set<string> &setString) {
  for (auto item: setString) {
    cout << item << endl;
  }
  cout << endl;
}

int main() {
  set<string> setString;

  setString.insert("Mohammed");
  setString.insert("Ahmed");
  setString.insert("Mohammed");
  setString.insert("Ali");

  print(setString);

  cout << "******************\n";
  
  set<string>::iterator ite = setString.find("Ahmed");
  // auto ite = setString.find("Ahmed");

  if (ite != setString.end()) {
    setString.erase(ite);
  }

  print(setString);

  return 0;
}