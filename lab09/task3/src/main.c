/**
 * @file main.c
 * @brief Варіативна функція
 *
 * @author Mosijchuk A.
 * @date 07-jan-2021
 * @version 1.0
 */

#include <stdarg.h>

/** 
 * Кількість елементів
 */

#define SIZE 5

/**
 * Функція, що визначає, скільки серед заданої послідовності чисел таких пар, 
 * у котрих перше число менше наступного.
 *
 * @param num перелік чисел
 * @param res кількість пар чисел
 * @return res
 */

int function (int num, ...);

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - створення змінної, в яку буде записаний результат виконання функції
 * - виклик функціїї function
 * @return успішний код повернення з програми (0)
 * @param res результат виконання функції function
 */

int main() {

	int res = function(SIZE, 2, 5, 1, 6, 7);

	return 0;

}

int function (int num, ...);

	int res = 0;
	va_list reason;
	va_start(reason, num);
	int tmp_first = va_arg(reason, int);
	for (int i = 0; i < SIZE; i++) {
		int tmp_second = va_arg(reason, int);
		if ( tmp_first < tmp_second ) {
			res += 1;
		}

		tmp_first = tmp_second;

	}

	va_end(reson);

	return res;

}


