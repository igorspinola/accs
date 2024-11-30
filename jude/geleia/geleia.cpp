#include <iostream>

using namespace std;

int main(){
    int n,aux, geleia = 0, trad = 0;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> aux;
	if (aux == 11) {
	    geleia++;
	} else {
	    trad++;
	}
    }

    if (geleia < trad) {
    	cout << "Tradicional" << endl;	
    } else {
    	cout << "Geleia" << endl;	
    }
}
