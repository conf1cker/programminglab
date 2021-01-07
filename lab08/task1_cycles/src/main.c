#include <stdlib.h>
#include <time.h>

float Square_root (int num);

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
