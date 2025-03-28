class Solution {
public:
    int numSquares(int n) {
        int x = sqrt(n);
        if (x * x == n) return 1;
        while (n % 4 == 0) n /= 4;
        if (n % 8 == 7) return 4;
        for (int i = 1; i * i <= n; i++) {
            int j = sqrt(n - i * i);
            if (i * i + j * j == n) return 2;
        }
        return 3;
    }
};
