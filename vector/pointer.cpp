#include <iterator>
#include <iostream>
#include <vector>
using namespace std ;
int main() {
    vector<int> v; 
    // quando se usar so um p = v ele aponta pro endereco base que é v[0], 
    // se for outra posicao tem que ser p = &v[4], por exemplo
    
    
    // iterator é um ponteiro para elementos 
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) { 
        cout  << *it << endl; // nao imprima o iterator, e sim o valor apontado por ele!
    }
}
