#include <iostream>
#include <vector>
using namespace std ;
int main() {
    vector<int> v;
    for (int i = 0; i < 1000; i++) {
        int j;
        cin >> j;
        v.push_back(j); // funcao push_back adiciona elemento no final do vetor
                        // e aloca mais espaco caso necessario
    }
}
