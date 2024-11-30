#include <iostream>
#include <vector>
using namespace std; // vector -> std

int main() {
     int v1[100];                     // vetor tradicional com 100 elementos
     vector<int> v2(100);            // vector com 100 elementos pre-alocados
     for (int i = 0; i < 100; i++) {
         cin >> v1[i] >> v2[i];		
     }
}
