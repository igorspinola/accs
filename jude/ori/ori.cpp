#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct mission {
    int xp;
    int bonus;
};
int main() {
    int n, x, b, a, m, sum = 0;
    mission aux;
    cin >> n;
    vector<mission> arr(n);

    for(int i = 0;i < n; i++) {
        cin >> x;
        arr[i].xp = x;    
    }

    for(int i = 0;i < n; i++) {
        cin >> b;
        arr[i].bonus = b;    
    }
    cin >> m >> a;
    for(int i = 0;i < n; i++) {
        sum += arr[i].xp * ( arr[i].bonus + a);
    }
    if (sum >= m) {
        cout << "Upou de Nivel!";
    } else {
        cout << "Nao foi dessa vez!";
    }

}
