#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct date {
    int da,mo, y;
};
bool compare(date a, date b) {
    //return (a.y < b.y);
    //return (a.y < b.y || a.y == b.y && a.mo < b.mo || a.mo == b.mo && a.da < b.da || a.da == b.da);
    return (a.y < b.y || a.y == b.y && a.mo < b.mo || a.mo == b.mo && a.y == b.y && a.da < b.da);
};
int main() {
    int d, m, a;
    vector<date> aux;
    date data;
    while (cin >> d && cin >> m && cin >> a) {
        data.da = d;
        data.mo = m;
        data.y = a;
        aux.push_back(data);
    }
    stable_sort(aux.begin(), aux.end(), compare);
    for (int i = 0; i < aux.size(); i++) {
        date el = aux[i];
        cout << el.da << " " << el.mo << " " << el.y << endl;
    }
}
