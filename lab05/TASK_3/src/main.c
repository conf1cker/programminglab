int main()
{

	int a = 792983;
	int result_1 = 0;
	int result_2 = 0;
	char result;

	while (a / 1000) {
		result_1 += a % 10;
		a = a / 10;
		}
	while (a % 1000) {
		result_2 += a % 10;
		a = a / 10;
		}
	if (result_1 == result_2) {
		result = 'true';
	} else {
		result = 'false';
	}

	return 0;

}
