#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n, m;
    string key, value, phrase = "", output = "", word = "", aux;
    map<string, string> di;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> key >> value;
        di[key] = value; 
        //cout << "debug" << di[key] << endl;
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> aux;
        phrase += aux;
        if(i != m - 1){
            phrase += " ";
        }
    }
    //cout << "phrase: " << phrase << endl;
    for (int i = 0; i < phrase.length(); i++) {
        if (phrase[i] == ' ') {
            aux = di[word];
            if(aux == "") {
                aux = word;
            }
            output += aux;
            output += " "; 
            word = "";
        } else if(i == (phrase.length() - 1)) {
            word += phrase[i];
            aux = di[word];
            if(aux == "") {
                aux = word;
            }
            output += aux;
            //cout << aux << endl;
        } else {
            word += phrase[i];
        }
    }
    cout << output << endl;
}
