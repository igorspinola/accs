#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
struct pad {
    string a;
    int b, c; 
};
bool compare(pad i, pad j) {
    return(i.a < j.a);
}
int main(){
    int n, m, p;
    string str;
    pad aux;
    vector<pad> v;

    cin >> n;

    for(int i = 0; i < n;i++) {
        cin >> str >> m >> p;
        aux.a = str;
        aux.b = m;
        aux.c = p;
        v.push_back(aux); 
    }
    stable_sort(v.begin(), v.end(), compare);
    for (int i = 0; i < v.size(); i++) {
       cout << v[i].a << " " << (v[i].b - v[i].c) << endl; 
    }
}
