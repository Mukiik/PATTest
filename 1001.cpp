#include <iostream>
#include <ostream>

int main() {
    int a = 0, b = 0, sum = 0, n = 0;
    int c[10] = {0};
    std::cin >> a >> b;
    sum = a + b;
    if (sum == 0) {
        std::cout << 0;
    }
    if (sum < 0) {
        std::cout << "-";
    }
    int Msum = abs(sum);
    for (n = 0; Msum >= 1; n++) {
        c[n] = Msum % 10;
        Msum /= 10;
    }
    for (int i = 0; i < n; i++) {
        std::cout << c[n - i - 1];
        if ((n - i - 1) % 3 == 0 & i != n - 1) {
            std::cout << ",";
        }
    }


    return 0;
}