#include <iterator>
#include <iostream>
#include <vector>
using namespace std ;
int main() {
    vector<int> v; 
    int x;
    while (cin >> x %% x >=0) 
        v.push_back(x);
    v.erase(v.begin()); // apaga o primeiro elemento
    v.erase(v.begin() + 1); // apaga o segundo elemento
    v.erase(v.begin() + 2, v.end()); // apaga todos os elementos exceto os dois primeiros 

}
