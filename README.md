# Домашняя работа 3
## Условие задачи
Написать и отладить программу расчета сопротивления двух
последовательно и параллельно соединенных резисторов
(сопротивления резисторов задается пользователем).
## 1. Алгоритм и блок-схема

### Алгоритм
1. **Начало**
  
2. Задать исходные данные:
   - R1 - Сопротивление первого резистора
   - R2 - Сопротивление второго резистора
3. Вычислить напряжение в последовательном соединение:
   - R_seq = R1 + R2
4. Вычислить напряжение в параллельном соединение:
   - R_par = (R1 * R2)/(R1 + R2)
5. Вывести результаты расчетов:
   - R_seq
   - R_par
9. **Конец**

### Блок-схема
![Блок-схема алгоритма](Блок-схемаФизика.png)

(https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=%D0%91%D0%BB%D0%BE%D0%BA-%D1%81%D1%85%D0%B5%D0%BC%D0%B0%D0%A4%D0%B8%D0%B7%D0%B8%D0%BA%D0%B0.png&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0%20%E2%80%94%201%22%20id%3D%22KzvBZ3VTc4L-15SchpKh%22%3E3Vhtc9o4EP41nmlvho6xgwkfY6DJXZO0U3pzHzvCXmxdZMuV5QD99V29GDAYjvO04XJfbGm1K8mPnt1H4PjjbHUrSJE%2B8BiY47nxyvEnjuf1r7wAX8qyNpbhaGAMiaCxddoaZvQ7WKNrrRWNoWw4Ss6ZpEXTGPE8h0g2bEQIvmy6LThrrlqQBA4Ms4iwQ%2BtfNJapsV57w639DmiS1iv3g5EZyUjtbL%2BkTEnMlzsmf%2Br4Y8G5NK1sNQamwKtxMXHvj4xuNiYgl%2BcELB%2BL4sPtn8kfrApXD%2BH8nk5%2B79lZngmr7Ac7E9cZ3ahnONXPiX4OnEnfubaHWcp1jQ%2BugUeBnXCZUgmzgkRqZIlsQFsqM4a9PjbtQiAkrI5%2BQX%2BDCxIKeAZSrNHFBvi%2BhdJyaeBaLi23J9Ov4U53TuXa2oglQ7KZeosXNixk%2FwY%2B9xC%2FA4RiJJTtciFTnvCcsOnWGgpe5TGodVzsbX3uOS8sen%2BDlGubHaSSvA1btdBpZHFfvBIRnPgiu39JRALyhJ%2FfflICGJH0ubmPnw67185aw1RXM3VYt%2FEZWjb%2FJ7h7Oa625Prr5qp%2FJldHl%2BSq34J6wHC74YLjB%2B%2FCH3yrlBiEimgUJahHGE1yx79Ra%2BQpCCo1gLWfklUqGqEa7x2HILHvl15R5aPOytDb0ZIrnOAzIj1W7w0QiKvZWXO3B%2BY9sqKgFqqJ1CGMAeOJIBk6FrhtPDsQ%2B2OftgP%2FlPELuoL6NvKzKkCtVuv6qtBSEYYtFSH4ZRXh6v9WEYIzK8KRk3qZihC0q5endStsz5mvJXyzafMVgXn9udC8yV215cL1i%2BZCW51%2B1bkwPDMXgkvmwvCoOpYFyVu1SmlCb0EyytZGqHqkKBj0ynUpITNJEjKaPz2QaKZt77WK6OThc67kSrVxRpIpqtt574A9g1JBHHsE3M7euIm6hRyeSfsMj3pud0byEl83IoOcqo9om%2Bd0bAh5glLcJXSMqs2f4Mj2T8dO8NNykhDRaeWpTCkvaNQlFoknko5g3cFcwLJL5AeS5yQmnULTDGtnh8B7wruEfSwzkq87bfWLypVOgcCqpOoUmZIjFEJuEWaaX0jKM5tKqCYxUs90SpykV6JALcyVU2d8qUumyve%2BX6zMAMNaCqKHpSKieWKrgfvOHfVrD5QouXupZbCw91gtejoUehFnjOhfgsqnEICLq8qn%2FOYkekp0XVduXBgfkczfeIOB2e9u4%2B3efdncXa1ou7qQuW%2FUFdj9Td%2BB32LZNH3HC2vL5v5riuCR%2B29TbF7gJ%2ByeaPuXF%2B2WPwJet2iPzhTt4SVFe3SAepPfNZ0%2FH57GpTnr%2FULOYnf7b64e2%2FlP3J%2F%2BAA%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)


## 2. Реализация программы

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

## 3. Результаты работы программы

Sample Input:
  - 12
  - 14

Sample Output:
 - Сопротивление при последовательном соединении: 26,00 Ом
 - Сопротивление при параллельном соединении: 6,46 Ом

## 4. Информация о разработчике

Гусев Степан, бИЦ-251
