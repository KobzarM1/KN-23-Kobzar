#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char sentence[100000]; // Задаємо максимальну довжину речення 100000
    int count_p = 0; // Лічильник "п"
    int count_punctuation = 0; // Лічильник розділових знаків

    printf(" --------------------------------------------------------------------------------");
    printf("\n|Застосунок призначений для обчислення кількості літер \"п\" у введенному реченні  |");
    printf("\n|або, якщо цей символ відсутній,то вивести кількість розділових знаків           |");
    printf("\n|                  Розробник застосунку: Кобзар Микола                           |");
    printf("\n|            Центральноукраїнський національний технічний університет            |");
    printf("\n|                                   2024 рік                                     |");
    printf("\n --------------------------------------------------------------------------------");

    printf("Enter the sentence: ");

    // Зчитуємо введене речення
    fgets(sentence, sizeof(sentence), stdin);

    // Визначаємо довжину рядка і видаляємо символ нового рядка, який додався під час введення
    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
        len--;
    }

    // Перебираємо символи в реченні
    for (int i = 0; i < len; ++i) {
        // Перевіряємо, чи є символ "п" або розділовий знак
        if (tolower(sentence[i]) == 'p') {
            count_p++; // Збільшуємо лічильник "п"
        } else if (ispunct(sentence[i])) {
            count_punctuation++; // Збільшуємо лічильник розділових знаків
        }
    }

    //  Виводимо результат
    if (count_p == 0) {
        printf("Number of punctuation marks: %d\n", count_punctuation);
    } else {
        printf("Number of 'p's: %d\n", count_p);
    }

    return 1;
}
