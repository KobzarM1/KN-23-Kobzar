#include <stdio.h>

float sum_before_negative(float arr[], int size) {
    float sum = 0;
    int i;

    for (i = 0; i < size; i++) {
        if (arr[i] < 0) {
            break; // Якщо знайдено від'ємний елемент, припиняємо обхід
        }
        sum += arr[i]; // Додаємо елемент до суми
    }

    return sum;
}

int main() {
    float arr[19] = {3.14, 2.718, 1.618, 9.81, 6.626, 299792458, 8.854187817e-12, 6.022e23, 6.67430e-11, 1.380649e-23, 9.80665, 299792458, 1.602176634e-19, 8.314, 6.022e23, 6.022e23, 6.022e23, 6.022e23, 6.022e23}; // Приклад масиву
    int size = sizeof(arr) / sizeof(arr[0]);
    float result = sum_before_negative(arr, size);

    if (result == 0) {
        printf("There are no negative elements in the array\n");
    } else {
        printf("Sum of elements before the first negative: %.2f\n", result);
    }

    return 0;
}
