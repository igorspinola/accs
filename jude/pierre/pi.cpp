#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int main() {
    int d, x, n, age, k = 0;
    string name;
    pair<int, string> aux;
    priority_queue<pair<int, string>> pq;
    vector<string> v;
    cin >> d >> x;
    for (int i = 0; i < d; i++) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> name >> age;
            aux.first = age;
            aux.second = name;
            pq.push(aux); 
        }
        for (int j = 0; j < x; j++) {
            aux = pq.top();
            pq.pop();
            name = aux.second;
            v.push_back(name);
        } 
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;  
    }
}
