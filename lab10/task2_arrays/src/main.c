/**
 * @file main2.c
 * @brief Заповнити масив із заданої кількості елементів що не повторюються
 *
 * @author Mosijchuk A.
 * @date 07-jan-2021
 * @version 1.0
 */


#include <stdio.h>

/**
 * Розмір масиву
 */

#define SIZE 15


/**
 * функція для знаходження послідовності простих чисел
 *
 * Послідовність дій:
 * - створення масиву в який буде записаний результат
 * - процес знаходження масиву, за допомогою циклів for
 * @return успішний код повернення з програми (0)
 * @param array масив, в який буде записаний результат виконаних дій
 */

int get_array(int array[SIZE]);

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - створення масиву
 * - виклик функції для заповнення масиву простими числами
 * @return успішний код повернення з програми (0)
 * @param array масив який передає мову функції
 */

int main() {
	int array[SIZE];
	get_array(array);
	return 0;
}
int get_array(int array[SIZE]) {
	
	int first_num = 2;
	for ( int i = 0 ; i < SIZE; i++ ) {
		for ( int j = first_num; j < 10000; j++){
			int definition = 1;  
			for ( int num = 2; num <= j / 2; num++){
				if ( j % num == 0){
					definition = 0; 
					break; 
				} 
			}                         
			if ( definition == 1) {
				array[i] = j;
			first_num = j + 1;
			break;
			}  
		}
	}   

	return array;
}
