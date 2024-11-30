#include <iostream>
#include <vector>
#include <string>

using namespace std;
struct pessoa {
    int id;
    string home;
};
struct carro {
    float v1, v2, v3;
    int id;
}
int main() {
    vector<pessoa> v; 
    pessoa eu;
    
    for (int i = 0; i < 100; i++) {
        cin >> eu.id >> eu.nome;
        v.push_back(eu);
    }

    for (int i = 0; i < 100; i++) {
        cout << v[i].id << " " << v[i].nome << endl;
    }
}
