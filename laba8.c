//Sviatoslav Tolstosheiev, Specialty KI-23009
//Task 8
#include <stdio.h>
#include <string.h>

unsigned long long compute_factorial(int num) {
    if (num == 0 || num == 1) return 1;
    unsigned long long fact = 1;
    for (int i = 2; i <= num; ++i) {
        fact *= i;
    }
    return fact;
}

unsigned long long count_anagrams(char* input_word) {
    int len = strlen(input_word);
    int char_count[256] = {0};

    for (int i = 0; i < len; ++i) {
        char_count[(unsigned char)input_word[i]]++;
    }

    unsigned long long total_factorial = compute_factorial(len);
    unsigned long long repeated_factorials = 1;
    
    for (int i = 0; i < 256; ++i) {
        if (char_count[i] > 0) {
            repeated_factorials *= compute_factorial(char_count[i]);
        }
    }

    return total_factorial / repeated_factorials;
}

int main() {
    char word[15];  
    printf("Введіть слово: ");
    scanf("%s", word);

    unsigned long long num_anagrams = count_anagrams(word);
    printf("Кількість можливих анаграм: %llu\n", num_anagrams);

    return 0;
}
//In this code, I used a combinatorial formula to find all possible options