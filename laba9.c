//Sviatoslav Tolstosheiev, Specialty KI-23009
//Task 9(FINAL BOSS)
#include <stdio.h>

// Функція для обчислення мінімальної кількості кроків
int calculate_min_steps(int start, int end) {
    if (start == end) {
        return 0;
    }

    int move_count = 1;  // перший крок завжди дорівнює 1
    int current_pos = start + 1;  // стартуємо з точки start, перший крок збільшує на 1
    int increment = 1;

    while (current_pos < end) {
        if (current_pos + increment + 1 <= end) {
            // якщо можна зробити крок на increment + 1, то робимо це
            increment += 1;
        } else if (current_pos + increment <= end) {
            // якщо можна зробити крок на increment, то робимо це
            increment = increment;
        } else {
            // якщо потрібно зробити крок на increment - 1, то робимо це
            increment -= 1;
        }

        current_pos += increment;
        move_count += 1;
    }

    return move_count;
}

// Основна функція для тестування
int main() {
    int start_point, end_point;

    // Запитуємо користувача ввести значення start_point і end_point
    printf("Введіть значення початкової точки: ");
    scanf("%d", &start_point);
    printf("Введіть значення кінцевої точки: ");
    scanf("%d", &end_point);

    // Перевіряємо, чи start_point не більше end_point
    if (start_point > end_point) {
        printf("Значення початкової точки повинно бути менше або дорівнювати значенню кінцевої точки.\n");
        return 1;
    }

    // Обчислюємо та виводимо результат
    int result_steps = calculate_min_steps(start_point, end_point);
    printf("Мінімальна кількість кроків від %d до %d: %d\n", start_point, end_point, result_steps);

    return 0;
}
//There are too many explanations to make in this code, so there are comments for almost everything