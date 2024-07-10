#include <stdio.h>

int main() {
    // Введення трьох значень
    double t1, t2, t3;
    printf("Введіть три значення:\n");
    scanf("%lf %lf %lf", &t1, &t2, &t3);

    // Обчислення загального часу
    double total_time_for_eat_cupcake = 1.0 / (1.0/t1 + 1.0/t2 + 1.0/t3);

    // Виведення результату з округленням до 2 знаків після коми
    printf("Час, необхідний для з’їдання пирога: %.2f годин\n", total_time_for_eat_cupcake);

    return 0;
}
