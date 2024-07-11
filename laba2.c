//Sviatoslav Tolstosheiev, Specialty KI-23009
//Task 2
#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int p;
    printf("Введіть кількість чисел p: ");
    scanf("%d", &p);

    if (p < 2 || p > 20) {
        printf("Кількість чисел має бути в діапазоні від 2 до 20.\n");
        return 1;
    }

    int numbers[20];

    printf("Введіть %d натуральних чисел, розділених пробілом: ", p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &numbers[i]);
    }

    int result = numbers[0];
    for (int i = 1; i < p; i++) {
        result = lcm(result, numbers[i]);
    }

    printf("Найменше спільне кратне заданих чисел: %d\n", result);

    return 0;
}
//In this code, I used Euclid's algorithm for the formula for finding the least common multiple