#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n, l, enemy, my_power, aux, dead = 0;
    queue<int> deck;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> my_power; 
        deck.push(my_power);
    }
    cin >> l;
    for (int j = 0; j < l; j++) {
        cin >> enemy;
        if (deck.empty()) {
            break;
        }
        aux = deck.front();
        deck.pop();
        if (aux >= enemy) {
            deck.push(aux);
        } else {
            dead++;
        }
    }
    cout << dead << endl;
}
