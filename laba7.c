//Sviatoslav Tolstosheiev, Specialty KI-23009
//Task 7
#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, r1, x2, y2, r2;
    
    printf("Введіть координати і радіус першого кола (x1, y1, r1): ");
    scanf("%lf %lf %lf", &x1, &y1, &r1);
    
    printf("Введіть координати і радіус другого кола (x2, y2, r2): ");
    scanf("%lf %lf %lf", &x2, &y2, &r2);
    
    double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    if (d == 0 && r1 == r2) {
        printf("-1\n"); 
    } else if (d > r1 + r2 || d < fabs(r1 - r2)) {
        printf("0\n"); 
    } else if (d == r1 + r2 || d == fabs(r1 - r2)) {
        printf("1\n");
    } else {
        printf("2\n"); 
    }
    
    return 0;
}
//In this code, I used the formula for the equation of a circle