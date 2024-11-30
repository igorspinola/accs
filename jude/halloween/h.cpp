#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
struct aluno {
    int a1, a2;
    int mat;
};
bool compare(aluno a, aluno b) {
    return(a.mat < b.mat);
}
int main() {
    int n, p;
    string output = "";
    aluno aux;
    vector<aluno> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> aux.mat >> aux.a1 >> aux.a2;
        v.push_back(aux);
    }
    cin >> p;
    vector<aluno>::iterator it;
    for (int i = 0; i < p; i++) {
        cin >> aux.mat;
        it = lower_bound(v.begin(), v.end(), aux, compare);
        if(it->mat == aux.mat && it->a1 == 1 && it->a2 == 1) {
            output = " ";
            cout << aux.mat << endl;
        }
    }
    if(output != " ") {
       cout << "PREGUICOSOS" << endl;
    }
}
