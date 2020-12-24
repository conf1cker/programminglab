int main()
{
	double x = 234.988;
	int y, y2;
	float result, y1;
	char false;

	y = ( x * 1000 );
	y1 = ( y / 1000 ); // 234
	y2 = ( y % 1000 ); // 988

	if ( y1 == 0 ) {
		false; 
	}

	result = y2 / y1;
	result = result * 100;
	result = (int) result;
	result = (float) result / 100;

	return 0;
} 
