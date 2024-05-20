#include <iostream>
#include <vector>

unsigned long long countUniquePaths(int rows, int cols) {
    std::vector<std::vector<unsigned long long>> dp(rows, std::vector<unsigned long long>(cols, 0));

    dp[0][0] = 1;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (i == 0 && j == 0) {
                continue;
            }
            if (j > 0) {
                dp[i][j] += dp[i][j - 1];
            }
            if (i > 0 && (j == 0 || dp[i - 1][j] > 0)) {
                dp[i][j] += dp[i - 1][j];
            }
        }
    }
    return dp[rows - 1][cols - 1];
}

int main() {
    int rows = 3;
    int cols = 3;

    unsigned long long totalWays = countUniquePaths(rows + 1, cols);
    std::cout << "Количество уникальных кратчайших путей из (" << rows << "," << cols << "): " << totalWays << "\n";

    return 0;
}