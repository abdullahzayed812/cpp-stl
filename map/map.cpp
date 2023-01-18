#include <iostream>
#include <vector>
#include <map>
using namespace std;

// Map is a data structure allow us to map data as key value
// Map key (index) can be anything of data type

void print(map<string, int> &mp) {
  for (pair<string, int> item: mp) {
    cout << item.first << "." << item.second << " | ";
  }
}

int main() {
  map<string, int> mp;
  mp["Mostafa"] = 10;
  mp["Said"] = 20;

  print(mp);

  map<char, vector<int>> my_data;

  vector<int> v;
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);

  my_data['x'] = v;

  cout << my_data['x'].size();

  return 0;
}