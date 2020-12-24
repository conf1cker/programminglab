#include <stdio.h>

int main()
{

	int a = 28;
	int summary = 0;
	char result;

	for (int i = 1; i < a; i++){
		if (a % i == 0) {
			summary += i;

		}
	}
	if (a == summary){
		result = 'true';
	} else {
		result = 'false';
	}

	printf("%d", result);

	return 0;

}
