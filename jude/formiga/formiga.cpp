#include <iostream>
#include <vector>
#include <stack>
using namespace std;
bool isValid(vector<vector<int>> m, int n, int x, int y) {
  if(x < 0 || y < 0 || x >= n || y >= n) 
    return false;
  return m[x][y] == 1;
}
int main() {
  int n, k, x, y;
  int a, b; // posicoes atuais
  cin >> n;
  vector<int> rows(n);
  vector<vector<int>> matrix(n);
  stack<pair<int, int>> stack;
  pair<int, int> cord;
  cord.first = x;
  cord.second = y;
  stack.push(cord);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> k;
      rows[j] = k; 
    
    matrix.push_back(rows); 
  }
  cin >> x >> y;
  //bool cond = v[x][y - 1] == 1 || v[x][y + 1] == 1 || v[x + 1][y] == 1 || v[x - 1][y] == 1;
  while (!stack.empty()) {
    cord = stack.top();
    stack.pop();
    if (!isValid(matrix, n, cord.first, cord.second) {
      continue; 
    }  
    matrix[cord.first, cord.second] = -1; 
    for (int i = 0; i < 4; i++) {
      adjx = cord.first +  
    }
  }
}
