#include <stdio.h> 
#include <limits.h> 
#include <locale>  
int main() {
    setlocale(LC_ALL, "");
    int n = 3;
    int i;
    int j;
    int a = 0;
    int* array = (int*)malloc(n * sizeof(int));
    printf("Введiть елементи масиву:\n");
    for (i = 0; i < n; i++) {
        scanf_s("%d", &array[i]);
    }

    int* min = array;

    for (i = 1; i < n; i++) {
        if (array[i] < *min) {
            min = &array[i];
        }
    }
    printf("Мiнiмальне значення: %d\n", *min);
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (array[i] == array[j] && array[i] == *min) {
                a += 1;
                break;
            }
        }
    }
    if (a > 0)
        printf("В масивi зустрiчається бiльше одного мiнiмального числа");
}