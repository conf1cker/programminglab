int main()
{
	int a = 4;
   	char res;

	if (n > 1) {
		for (int i = 2; i < n; i++){
			if (a % i == 0){
				res = 'f';
				break;

			} else {
			res = 't';

			}
		}
	}

	return 0;

}
