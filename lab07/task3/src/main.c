#include <stdarg.h>

#define SIZE 5

int function (int num, ...);

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


