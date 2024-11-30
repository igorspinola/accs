#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct dwarf {
    string name;
    int weight;
};
int main() {

    int n, k;
    string in_name;
    int in_weight;
    cin >> n;
    dwarf aux;
    vector<dwarf> arr;
    vector<string> excess;
    int len_exc = 0;
    bool isOver = false;
    string output = "Vamos todos encontrar a montanha!";
    for (int i = 0; i < n; i++) {
	cin >> in_name >> in_weight;
	aux.name = in_name;
	aux.weight = in_weight;
	arr.push_back(aux);	
    }
    cin >> k;
    for (int i = 0; i < n; i++) {
	if (arr[i].weight > k) {
	    len_exc++;
	    excess.push_back(arr[i].name);
	    output = "Vamos virar almoço de aranhas gigantes!";
	    isOver = true;
	}
    }
    cout << output << endl;
    if (isOver) {
	for(int i = 0;i < len_exc;i++) {
	    cout << excess[i] << endl;
	}
    }
}
