#include <iostream>
#include <vector>
using namespace std ;
int main() {
    vector<int> v;
    int x;
    while (cin >> x && x >= 0) 
        v.push_back(x);
    
    cout << "vector:" << endl;
    for (int i = 0; i < v.size(); i++) { // funcao size retorna a quantidade de elementos do vetor
        cout  << v[i] << endl; // o acesso ao vetor é realizado normalmente
    }
}
