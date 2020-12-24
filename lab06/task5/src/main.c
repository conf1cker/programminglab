#include <stdio.h>

#define SIZE 3

int main() {
	int array [SIZE][SIZE] = {
		{3, 4, 7},
		{2, 5, 8},
		{1, 6, 9},
	};
	int buffer = array [0][0];
	for (int i = 0; i < SIZE * SIZE; i++) {
		array [0] [i] = array [0] [i + 1];
	}
    
	array [SIZE - 1] [SIZE - 1] = buffer;
    
	return 0;
}
