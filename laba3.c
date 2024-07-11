//Sviatoslav Tolstosheiev, Specialty KI-23009
//Task 3
#include <stdio.h>
#include <math.h>

long long count_invalid_numbers(int p) {
    if (p < 3) return 0;

    long long count = 0;
    
    count += 2 * pow(2, p - 3);
   
    for (int i = 3; i < p; i++) {
        count += 2 * pow(2, p - i - 1);
    }

    return count;
}

int main() {
    int p;
    scanf("%d", &p);

    if (p < 1 || p > 30) {
        printf("Недопустиме значення p\n");
        return 1;
    }

    long long total_numbers = pow(2, p);

    long long invalid_numbers = count_invalid_numbers(p);

    long long valid_numbers = total_numbers - invalid_numbers;

    printf("%lld\n", valid_numbers);
    return 0;
}
