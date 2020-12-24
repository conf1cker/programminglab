#include <stdio.h>
#include <string.h>

#define SIZE 15

int main() {

	char space = '_';
	char word [SIZE] = "gaming        \0";
	char conteiner [SIZE];
	int sz_w = 0;

	for (int i = 0; word[i] != space; i++){ // количество букв, которые находяться в самом массиве
		sz_w += 1;
	}
	strncpy (conteiner, word, sz_w); // копирование символов sz_w из одного массива в другой

	int sz_space = (SIZE - sz_w - 1) / 2; // пробелы с одной стороны

	for (int j = 0; j <= sz_space; j++) { // заполнение массива пробелами
		word [j] = space;
	}

	int a = sz_space + sz_w;

	int p = 0;
	for (int m = sz_space; m < a; m++) { // заполнение массива буквами
		word [m] = conteiner [p];
		p += 1;
	}
	for (int k = a; k < SIZE - 1; k++) { // заполнение массива пробелами
		word [k] = space;
	}
	word [14] = '\0';

	return 0;
}
