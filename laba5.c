//Sviatoslav Tolstosheiev, Specialty KI-23009
//Task 5
#include <stdio.h>

const int MOD = 1000000007;

int main() {
  int n;

  printf("Введіть довжину послідовності: ");
  scanf("%d", &n);

  if (n < 1 || n > 10000) {
    printf("Неприпустиме значення довжини послідовності (1 <= n <= 10000).\n");
    return 1;
  }

  int dp[n + 1];
  dp[0] = 1;
  dp[1] = 2;

  for (int i = 2; i <= n; ++i) {
    dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
  }

  printf("Кількість допустимих послідовностей: %d\n", dp[n]);

  return 0;
}
//I wrote this code using dynamic programming