#include <iostream>
#include <vector>

unsigned long long binomialCoefficient(int n, int k) {
    if (k > n - k) {
        k = n - k;
    }

    unsigned long long result = 1;
    for (int i = 0; i < k; ++i) {
        result = result * (n - i) / (i + 1);
    }
    return result;
}

unsigned long long quantityWays(int rows, int cols) {
    int totalSteps = (rows)+(cols);

    return binomialCoefficient(totalSteps, rows);
}

int main() {
    setlocale(LC_ALL, "ru");
    int rows = 15;
    int cols = 14;

    unsigned long long totalWays = quantityWays(rows, cols);
    std::cout << "Количество уникальных путей в прямоугольнике (" << rows << "," << cols << "): " << totalWays << "\n";

    return 0;
}