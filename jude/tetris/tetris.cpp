#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
  int n, m, score = 0;
  string aux,ttop, over = "game over";
  bool win = true;
  stack<string> tower;
  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    cin >> aux; 
    if (!tower.empty()) {
      ttop = tower.top(); 
      bool cond = true;
      for (int i = 0; i < 3; i++) {
        if (aux[i] == ttop[i]) {
          cond = false;
        }
      }
      if (cond) {
        score += 10;
        tower.pop();
      } 
      else {
        tower.push(aux);
      }
    } else {
      tower.push(aux);
    }
    if (tower.size() >= m) {
      win = false;
      break;
    }
  }
  if (win) {
    cout << score << endl; 
  } else {
    cout << over << endl;
  }
}
