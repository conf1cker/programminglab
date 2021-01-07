#include <stdio.h>

#define SIZE 15

int get_array(int array[SIZE]);

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
