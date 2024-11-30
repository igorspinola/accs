#include <iostream>

using namespace std;

int main(){
    int n, ch, output = -1;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n;i++) {
        cin >> arr[i];
    }
    cin >> ch;
    for(int i = 0; i < n;i++){
        if(arr[i] == ch) {
            output = ch;
            break;
        }
    }
    cout << output;
}
