/**
 * @mainpage
 * # Загальне завдання
 * 1. **Сформувати** функцию, що буде рухувати квадратний корінь з числа
 * 2. **Сформувати** функцію, що буде премножати матрицю саму на себе
 * 3. **Сформувати** варіаивну функцію, що буде рахувати кількість пар чисел, в яких наступне число меньше попереднього
 *
 * @author Mosijchuk A.
 * @date 07-jan-2021
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Квадратний корінь з числа
 *
 * @author Mosijchuk A.
 * @date 07-jan-2021
 * @version 1.0
 */


#include <stdlib.h>
#include <time.h>

/**
 * Функція для розрахунку квадратного кореня з числа
 *
 * Послідовність дій:
 * - створення змінних, я які буде записаний результат
 * - розрахунок результату, за допомогою цикла whie
 * @return res
 * @param res добутий корінь із заданого числа
 */

float Square_root (int num);

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - створення змінної, в яку буде записане число
 * - створення змінних, я які буде записаний результат виконання функіїї
 * - виклик функціїї Square_root для числа згенерованого функцією rand
 * - виклик функціїї Square_root для заданого нами числа
 * @return успішний код повернення з програми (0)
 * @param num число, я якого отримаємо корінь
 * @param res_1 результат першого виклику функції Square_root
 * @param res_2 результат другого виклику функції Square_root
 */

int main() {

	srand(time(NULL));
	int num;
	float res_1 = Square_root ( num = rand() % 50);
	float res_2 = Square_root ( num = 144 );

	return 0;

}

float Square_root (int num) {

	float res = 0.0001;
	while ( res * res <= num ) {
		res += 0.0001;
	}

	return res;

}