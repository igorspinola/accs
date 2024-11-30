#include <iostream>

using namespace std;

int main(){
    int star, mega, cara;
    cin >> star >> mega >> cara;
    
    if(star == 30) {
        cout << "PROXIMO MUNDO" << endl;
    } else {
        cout << 30 - star << " " << 6 - mega << " " << 3 - cara << endl;
    }

}
