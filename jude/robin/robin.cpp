#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n, m, t, aux, len;
    cin >> n >> m;
    queue<int> esc;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        esc.push(aux);
    }
    t = 0;
    while(t < m && !esc.empty()) {
        //if(t >= m || esc.empty()) {
        //    break;
        //}
        aux = esc.front();
        esc.pop();
        if (aux > 1) {
            esc.push(aux - 1); 
            t++;
        } else {
            t += aux;
        }
    }
    if (esc.empty()) {
        cout << "pronto" << endl;
    } else {
        len = esc.size();
        cout << len << endl;
        for (int i = 0; i < len; i++) {
            aux = esc.front();
            esc.pop();
            if (i == 0) {
                cout << aux; 
            } else {
                cout << " " << aux;
            }
        }
        cout << endl;
    }

}
