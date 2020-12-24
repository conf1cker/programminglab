int main()
{
	int a = 354;
	int b = 145;
	int nsd;

	while (a != 0 && b != 0) {

	if (a > b){
		a = a % b;
	} else {
		b = b % a;
		}
	}

	nsd = a + b;

	return 0;

}
