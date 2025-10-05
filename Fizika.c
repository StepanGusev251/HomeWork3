#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
    double R1, R2, R_seq, R_par;
    setlocale(LC_ALL, "RUS");
    // Запрос сопротивлений у пользователя
    printf("Введите сопротивление первого резистора: ");
    scanf("%lf", &R1);

    printf("Введите сопротивление второго резистора: ");
    scanf("%lf", &R2);
    

    // Расчет сопротивления при последовательном соединении
    R_seq = R1 + R2;

    // Расчет сопротивления при параллельном соединении
    if (R1 == 0 || R2 == 0) {
        R_par = 0; // параллельное соединение с нулевым сопротивлением
    }
    else {
        R_par = (R1 * R2) / (R1 + R2);
    }

    // Вывод результатов
    printf("\nСопротивление при последовательном соединении: %.2f Ом\n", R_seq);
    printf("Сопротивление при параллельном соединении: %.2f Ом\n", R_par);

    return 0;
}