#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <string>

using namespace std;
bool cmp(pair<int, int> c, pair<int, int> d) {
  return (c.first > d.first || c.first == d.first && c.second < d.second);
}
int main() {
    int n, q, c;
    pair<int, int> candidate;
    vector<pair<int, int>> v;
    vector<string> output;
    string aux;

    cin >> n >> q;

    for (int i = 0; i < q; i++) {
      cin >> candidate.first >> candidate.second; 
      v.push_back(candidate); 
    }
    stable_sort(v.begin(), v.end(), cmp);
    cin >> c;
    for (int i = 0; i < c; i++) {
      cin >> candidate.first >> candidate.second; 
      aux = "Nao";
      for (int i = 0; i < n; i++) {
        if (v[i].second == candidate.second) {
          aux = "Sim";    
          break;
        } 
      }  
      output.push_back(aux);
    }
    for (int i = 0; i < c; i++) {
       cout << output[i] << endl; 
    }
}
