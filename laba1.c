//Sviatoslav Tolstosheiev, Specialty KI-23009
//Task
#include <stdio.h>

int main() {
    double t1, t2, t3;
    printf("Введіть ТРИ значення:\n");
    scanf("%lf %lf %lf", &t1, &t2, &t3);

    double total_time_for_eat_cupcake = 1.0 / (1.0/t1 + 1.0/t2 + 1.0/t3);

    printf("Час, необхідний для з’їдання пирога: %.2f годин\n", total_time_for_eat_cupcake);

    return 0;
}
