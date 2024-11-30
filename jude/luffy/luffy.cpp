#include <iostream>

int main(){
    int n = 6, sum = 0, t;

    for(int i = 0;i < 6;i++) {
        std::cin >> t;
        sum += t;
    }
    std::cout << sum;
}
