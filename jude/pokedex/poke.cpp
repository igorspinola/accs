#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, m, aux;
    set<int> pokedex;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        pokedex.insert(aux);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> aux;
        if(pokedex.count(aux) == 1) {
            cout << "Repetido" << endl; 
        } else {
            cout << "Temos que pegar!" << endl; 
        }
        pokedex.insert(aux);
    }
}
